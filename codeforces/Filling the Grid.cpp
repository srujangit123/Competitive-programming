#include<stdio.h>
#include<iostream>
using namespace std;
int r[1010], c[1010];
int mod = 1000000007;


int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i) cin >> r[i];
	for(int i = 0; i < m; ++i) cin >> c[i];
	int ans = 1;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(((j == r[i]) && (i < c[j])) || ((j < r[i]) && i == c[j]))
			ans = 0;
			if(j > r[i] && i > c[j]) {
				ans *= 2;
				ans %= mod;
			}
		}
	}
	cout << ans;
	return 0;
}
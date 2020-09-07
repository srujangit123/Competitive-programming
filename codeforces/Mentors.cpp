#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {   
	ll n, k, i, x, y, r[1000000], t[1000000];
	cin >> n >> k;
	ll m[n + 1]={0};
	for(i = 1; i <= n; i++)
	    cin >> r[i], t[i]=r[i];
	sort(r + 1, r + n + 1);
	for(i = 1; i <= k; i++) {
		cin >> x >> y;
		if(t[x] > t[y]) m[x]++;
		if(t[y] > t[x]) m[y]++;
	}
	for(i = 1; i <= n; i++) {
		ll index = upper_bound(r + 1, (r + n + 1), t[i] - 1) - (r + 1);
		cout << index - m[i] << " ";
	}
}
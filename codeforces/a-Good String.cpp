#include<bits/stdc++.h>
using namespace std;

char ar[140000];
 
int getCost(int L, int R, char ch)
{
	int cnt = 0;
	for(int i = L; i <= R; ++i)
	    if(ar[i] != ch) ++cnt;
	
	return cnt;
}
 
int getMin(int L, int R, char ch) {
	if(L == R) {
		if(ar[L] == ch) return 0;
		else			return 1;
	}
	int mid = (L + R) / 2;
	return min(getCost(L , mid , ch) + getMin(mid + 1 , R , ch+1), getCost(mid + 1, R, ch) + getMin(L, mid, ch + 1));
}
 
int main()
{
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) cin >> ar[i]; 
		cout << getMin(1, n, 'a') << endl;
	}
    return 0;
}
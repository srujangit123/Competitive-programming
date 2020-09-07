#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> a;
    a.resize(k);
    for(int i = 0; i < k; ++i) {
        cin >> a[i];
    }
    // sort(a, a + n);
	for (int i=0; i<=k; i++) {
		if (s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end()) {cout << i << endl; return;}
		if (s+i <= n && find(a.begin(), a.end(), s+i) == a.end()) {cout << i << endl; return;}
	}
}



int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
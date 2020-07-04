#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve() {
    ll a, n;
    cin >> a >> n;
    for(ll i = 2; i <= n; ++i) {
        ll x = a;
        ll min_d = 9;
        ll max_d = 0;
        while(x) {
            ll d = x % 10;
            x /= 10;
            min_d = min(min_d, d);
            max_d = max(max_d, d);
        }
        if(min_d == 0) break;
        a += min_d * max_d;
    }
    cout << a << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t; 
    while(t--)
        solve();
    return 0;
}
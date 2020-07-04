#include <bits/stdc++.h>
#define ll long long int
ll MOD = 1e9 + 7;
using namespace std;

ll fastExpo(ll x, ll n){
    ll result = 1;
    while(n > 0){
        if(n%2 != 0 ){
            result = (result * x)%MOD;
        }
        x = (x * x)%MOD;
        n/=2;
    }
    return result;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    ll p = (fastExpo(2, m) - 1)%MOD; // answer is (2^m - 1)^n
    ll ans = fastExpo(p, n);
    cout << ans << "\n";
}

int main(){
    solve();
    // cout << fastExpo(2, 3);
    return 0;
}

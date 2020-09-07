#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll x;

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    ll ans;
    for(ll i = 1 ; i * i <= x ; i++){
        if(x % i == 0 && lcm(i, x / i) == x){
            ans = i;
        }
    }
    cout << ans << " " << x / ans << endl;
}
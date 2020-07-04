#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n/2; ++i){
        ans += (ll)8*(ll)i*i;
    }
    cout << ans << "\n";
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
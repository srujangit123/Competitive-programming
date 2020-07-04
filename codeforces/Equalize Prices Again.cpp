#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    int p ;
    ll total = 0;
    for(int i = 0; i < n; ++i){
        cin >> p;
        total += p;
    }
    
    cout << (ll)(ceil(total/(float)n)) << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
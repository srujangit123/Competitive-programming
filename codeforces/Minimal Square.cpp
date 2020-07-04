#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    if(max(a, b) < 2*min(a, b)){
        cout << ((ll)(2*min(a, b)))*(2*min(a, b)) << "\n";
    }
    else {
        cout << (ll)max(a, b)*max(a, b) << "\n";
    }

    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n%2 == 0){
        cout << (m * n)/2 << "\n";
    }
    else {
        cout << (ll)((m * (n - 1))/2 + ceil((double)m/2)) << "\n";
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
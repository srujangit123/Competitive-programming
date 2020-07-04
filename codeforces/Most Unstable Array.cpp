#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n == 1){
        cout << "0\n";
        return;
    }
    if(n <= 2){
        cout << m << "\n";
        return;
    }
    cout << 2 * m << "\n";
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
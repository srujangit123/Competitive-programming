#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int x, n, m;
    cin >> x >> n >> m;
    while(x > 20 && n > 0){
        x = x/2 + 10;
        n--;
    }
    // cout << x << " " << n << " " << m ;
    while(m > 0){
        m--;
        x-=10;
    }
    if(x <= 0){
        cout << "YES" << "\n";
    }
    else{ 
        cout << "NO" << "\n";
        // cout << x << " " << n << " " << m ;
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
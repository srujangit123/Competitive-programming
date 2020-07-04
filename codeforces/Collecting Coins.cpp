#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a[3], n;
    for(int i = 0; i < 3; ++i){
        cin >> a[i];
    }
    cin >> n;
    sort(a, a + 3);
    n -= (2 * a[2] - a[0] - a[1]);
    if(n >= 0 && n%3 == 0){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int a[205];

void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) cin  >> a[i];

    for(int i = 1; i <= n; ++i){
        int chance = a[i];
        int cnt = 1;
        while(chance!=i){
            cnt++;
            chance = a[chance];
        }
        cout << cnt << " ";
    }
    cout << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a[102];
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for(int i = 2; i <= n; ++i){
        if(a[i] - a[i - 1] == 1){
            cout << "2" << "\n";
            return ;
        }
    }
    cout << "1" << "\n";
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
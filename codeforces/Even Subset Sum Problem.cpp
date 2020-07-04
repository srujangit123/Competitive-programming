#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(a[i]%2 == 0) even++;
        else odd++;
    }
    if(even != 0){
        cout << 1 << "\n";
        for(int i = 1; i <= n; ++i){
            if(a[i]%2 == 0){
                cout << i << "\n";
                return;
            }
        }
    }
    else if(odd >= 2){
        int cnt = 0;
        cout << 2 << "\n";
        for(int i = 1; i <= n; ++i){
            cout << i << " ";
            cnt++;
            if(cnt == 2){
                return;
            }
        }
    }
    else {
        cout << "-1\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
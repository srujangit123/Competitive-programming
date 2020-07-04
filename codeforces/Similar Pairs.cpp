#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i]%2 == 0){
            even ++;
        }
        else {
            odd++;
        }
    }
    if(even%2 == 0 && odd%2 == 0){
        cout << "YES" << "\n";
        return;
    }
    sort(a.begin(), a.end());
    int cp = 0, cnt = 0;
    for(int i = 0; i < n - 1; ++i){
        if(a[i + 1] - a[i] == 1){
            cnt ++;
        }
        if((even - cnt)%2 == 0 && (odd - cnt)%2 == 0){
            cout << "YES" << "\n";
            return;
        }
    }
    if(cnt == 0){
        cout << "NO" << "\n";
        return;
    }
        if((even - cnt)%2 == 0 && (odd - cnt)%2 == 0){
            cout << "YES" << "\n";
            return;
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
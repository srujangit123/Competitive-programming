#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int mini = INT32_MAX;
    for(int i = 0; i < n - 1; ++i){
        if(a[i + 1] - a[i] < mini){
            mini = a[i + 1] - a[i];
        }
    }
    cout << mini << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
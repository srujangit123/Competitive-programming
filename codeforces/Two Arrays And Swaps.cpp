#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    for(int i = 0; i < k; ++i){
        if(a[i] < b[i])
            swap(a[i], b[i]);
    }
    ll sum = 0;
    for(int i = 0; i < n; ++i){
        sum += (ll)a[i];
    }
    cout << sum << "\n";
    return;
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
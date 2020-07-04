#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    for(int i = 1; i < n + 1; ++i) cin >> a[i];
    for(int i = 1; i < m + 1; ++i) cin >> b[i];
    int number_of_swaps = 100;
    while(number_of_swaps != 0){
        number_of_swaps = 0;
        for(int i = 1; i <= m; ++i){
            if(a[b[i]] > (a[b[i] + 1])){
                swap(a[b[i]], a[b[i] + 1]);
                number_of_swaps++;
            }
        }
    }
    for(int i = 1; i <= n - 1; ++i){
        if(a[i] <= a[i + 1]){
            continue;
        }
        else {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}



int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m, q;
    cin >> q;
    for(int i = 1; i <= q; ++i){
        cin >> m;
        cout << upper_bound(a.begin(), a.end(), m) - a.begin() << "\n";
    }
}



int main(){
    solve();
    return 0;
}
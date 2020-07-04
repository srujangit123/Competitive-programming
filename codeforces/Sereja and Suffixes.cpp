#include <bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), ans(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    set <int> b;
    b.insert(a[n]);
    ans[n] = 1;
    for(int i = n - 1; i >= 1; --i){
        if(b.find(a[i])!=b.end()){
            ans[i] = ans[i + 1];
        }
        else {
            ans[i] = ans[i + 1] + 1;
            b.insert(a[i]);
        }
    }
    int q;
    for(int i = 1; i <= m; ++i){
        cin >> q;
        cout << ans[q] << "\n";
    }


}

int main(){
    solve();
    return 0;
}
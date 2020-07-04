#include <bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1), ans(n + 1, 0);
    vector<bool> vis(n + 1, false);
    for(int i = 1; i <= n; ++i) cin  >> a[i];
    for(int i = 1; i <= n; ++i){
        //dfs
        vector<int> cycle;
        if(!vis[i]){
            vis[i] = true;
            int chance = a[i];
            cycle.push_back(a[i]);
            while(chance!=i){
                vis[chance] = true;
                chance = a[chance];
                cycle.push_back(chance);
            }
            for(int i = 0; i < cycle.size(); ++i){
                ans[cycle[i]] += cycle.size();
            }
        }

    }
    for(int i= 1; i <= n; ++i){
        cout << ans[i] << " ";
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
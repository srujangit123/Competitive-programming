#include <bits/stdc++.h>
 
using namespace std;
 
int t;
 
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> t;
    while (t--){
        int n,m; cin >> n >> m;
        string s; cin >> s;
        vector<int>p(m);
        vector<int>ans(26);
        for (int i=0; i<m; ++i){
            cin >> p[i];
            p[i]--;
        }
        vector<int> cnt(n);
        for (int i=0; i<m; ++i){
            ++cnt[p[i]];
        }
        for (int i=n-1; i>0; --i){
            cnt[i-1]+=cnt[i];
        }
        for (int i=0; i<n; ++i){
            ans[s[i]-'a']+=cnt[i]+1;
        }
        for (auto elem : ans){
            cout << elem << " ";
        }
        cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
    int n, m ;
    cin >> n >> m;
    string s, t, result;
    cin >> s >> t;
    int maxlcs = 0; //MAx Number of like characters in s and t
    for(int i = 0; i <= m - n; ++i){
        string p = t.substr(i, n);
        int lcs = 0;
        for(int i = 0; i < n; ++i){
            if(p[i] == s[i]){
                lcs++;
            }
        }
        if(lcs > maxlcs){
            maxlcs = lcs;
            result = p;
        }
    }
    if(result == ""){
        cout << n << "\n";
        for(int i = 1; i <= n; ++i){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    cout << n - maxlcs << "\n";
    for(int i = 0; i < n; ++i){
        if(result[i]!=s[i]){
            cout << i + 1 << " ";
        }
    }
    cout << "\n";
}

int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin >> s;
    int x;
    cin >> x;
    int n = s.size();
    string w(n, '1');
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0') {
            if(i - x >= 0) {
                w[i - x] = '0';
            }
            if(i + x < n) {
                w[i + x] = '0';
            }
        }
    }
    bool ok = true;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') {
            if(i >= x && w[i - x] == '1') {
                continue;
            }
            if(i + x < n && w[i + x] == '1'){
                continue;
            }
            ok = false;
        }
    }
    if(ok) {
        cout << w << "\n";
    }
    else {
        cout << "-1\n";
    }
}


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

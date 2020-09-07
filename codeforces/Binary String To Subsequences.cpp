#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans[n];
    vector<int> zero, one;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0') {
            if(!one.empty()) {
                int index = one[(int)one.size() - 1];
                ans[i] = index;
                one.pop_back();
                zero.push_back(index);
            }
            else {
                cnt++;
                ans[i] = cnt;
                zero.push_back(cnt);
            }
        }
        else {
            if(!zero.empty()) {
                int index = zero[(int)zero.size() - 1];
                ans[i] = index;
                zero.pop_back();
                one.push_back(index);
            }
            else {
                cnt++;
                ans[i] = cnt;
                one.push_back(cnt);
            }
        }
    }
    cout << cnt << "\n";
    for(int i : ans) {
        cout << i << " ";
    }
    cout << "\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int t;
    set<int> s;
    pair<set<int> :: iterator, bool> p;
    for(int i = 1; i <= 2 * n; ++i) {
        cin >> t;
        if(s.empty() || s.find(t) == s.end()) {
           s.insert(t);
           cout << t << " ";
        }
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
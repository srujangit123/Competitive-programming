#include <bits/stdc++.h>
using namespace std;


void solve() {
    int x;
    cin >> x;
    if(x%3 == 0 || x%7 == 0 ) {
        cout << "YES\n";
        return;
    }
    while(x > 0) {
        if(x%3 == 0) {
            break;
        }
        x -= 7;
    }
    if(x < 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}


int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
    return 0;
}
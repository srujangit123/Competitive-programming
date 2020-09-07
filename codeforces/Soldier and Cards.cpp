#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k1, k2, x;
    cin >> n;
    deque <int> a, b;
    cin >> k1;
    for(int i = 1; i <= k1; ++i) {
        cin >> x;
        a.push_front(x);
    }
    cin >> k2;
    for(int i = 1; i <= k2; ++i) {
        cin >> x;
        b.push_front(x);
    }
    int maxi = 0;
    while(maxi < 10000 && !a.empty() && !b.empty()) {
        if(a.back() > b.back()) {
            a.push_front(b.back());
            a.push_front(a.back());
            b.pop_back();
            a.pop_back();
        } else {
            b.push_front(a.back());
            b.push_front(b.back());
            b.pop_back();
            a.pop_back();
        }
        maxi ++;
    }
    if(maxi >= 10000) {
        cout << "-1\n";
    } else {
        if(a.empty()) {
            cout << maxi <<" 2\n";
        } else {
            cout << maxi << " 1\n";
        }
    }
    return 0;
}
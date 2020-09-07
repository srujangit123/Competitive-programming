#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> m;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
    }
    sort(a, a + n);
    m[a[n - 1]]--;
    a[n - 1]++;
    m[a[n - 1]]++;
    if(a[0] > 1) {
        m[a[0]]--;
        m[a[0] - 1]++;
        a[0]--;
    }
    // for(int i : a) cout << i << " ";
    // cout << endl;
    // cout << "-----------------------\n";
    for(int i = n - 2; i > 0; --i) {
        if(m[a[i] + 1] == 0) {
            m[a[i]]--;
            m[a[i] + 1]++;
            a[i]++;
        } else if(m[a[i]] == 1) {
            continue;
        } else {
            if(a[i] != 1) {
                m[a[i]]--;
                m[a[i] - 1]++;
                a[i]--;
            }
        }
    }
    int ans = 0;
    for(auto i : m) {
        if(i.second != 0) {
            ans++;
        }
    }
    // for(int i : a) std::cout << i << " ";
    // std::cout << endl;
    std::cout << ans ;
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n, l, r, x;
    ll ans = 0;
    cin >> n >> l >> r >> x;
    int c[n];
    for(int i = 0; i < n; ++i) cin >> c[i];
    int power_set_size = pow(2, n);
    for(int i = 1; i < power_set_size; ++i) {
        if(__builtin_popcount(i) < 2) continue;
        vector<int> s;
        ll sum = 0;
        for(int j = 0; j < n; ++j) {
            if(i & (1 << j)) {
                s.push_back(c[j]);
                sum += c[j];
            }
        }
        sort(s.begin(), s.end());
        if(s[s.size() - 1] - s[0] >= x && sum >= l && sum <= r) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x != y && y != z && z != x) {
        cout << "NO\n";
        return;
    }
    if(x == y && x == z && y == z) {
        cout << "YES\n" << x << " " << x << " " << x << "\n";
        return;
    }
    int cnt_maxi = 0;
    int maxi = max({x, y, z});
    if(x == maxi) cnt_maxi++;
    if(y == maxi) cnt_maxi++;
    if(z == maxi) cnt_maxi++;
    if(cnt_maxi == 2){
        cout << "YES\n";
        cout << max({x, y, z}) << " " << min({x, y, z}) << " " << min({x, y, z})  << "\n";
    }
    else {
        cout << "NO\n";
    }

}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
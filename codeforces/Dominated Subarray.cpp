#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    int ans = n + 1;
    map<int, int> last;
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        if(last[x]) ans = min(ans, i - last[x] + 1);
        last[x] = i;
    }
    if(ans > n) cout << "-1\n";
    else cout << ans << "\n";
}


int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

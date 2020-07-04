#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int dp[1002];
    for(int i = 0; i < 1002; ++i) 
        dp[i] = 0;

    dp[1] = x;
    dp[2] = min(2 * x, y);

    for(int i = 3; i <= 1001; ++i){
        dp[i] = min(dp[i - 1] + x, dp[i - 2] + y);
    }

    char ch;
    ll ans = 0, cnt = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> ch;
            if(ch == '.') 
                cnt++;
            else {
                ans += dp[cnt];
                cnt = 0;
            }
        }
        if(cnt != 0){
            ans += dp[cnt];
            cnt = 0;
        }
    }
    cout << ans << "\n";
}



int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    int dp[n + 1];
    for(int i = 0; i <= n; ++i){
        dp[i] = 0;
    }
    dp[1] = 1;
    for(int i = 2; i <= n; ++i){
        dp[i] = 4 * (i - 1) + dp[i - 1];
    }
    cout << dp[n] << "\n";
}

int main(){
    solve();
    return 0;
}
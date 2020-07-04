#include <bits/stdc++.h>
using namespace std;

void maxincsubarray(int a[], int dp[], int n){
    for(int i = 1; i <= n - 1; ++i){
            for(int j = i - 1; j >= 0; --j){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << dp[n - 1] << "\n";
}



void solve(){// this is for subarray
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1);
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 1; i < n; ++i){
        if(a[i - 1] < a[i]){
            dp[i] = max(dp[i - 1] + 1, dp[i]);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << "\n";
}





int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void maxincsubarray(){
    int n;
    cin >> n;
    vector<int> a(n), dp(n + 1, 1);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 1; i <= n - 1; ++i){
        if(a[i - 1] <= a[i]){
            dp[i] = dp[i - 1] + 1;
        }
    }
    cout << *max_element(dp.begin(), dp.end());
}



int main(){
    maxincsubarray();
    return 0;
}
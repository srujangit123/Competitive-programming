#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n;
    cin >> n;
    if(n%2 != 0){
        cout << "0";
        return;
    }
    else {
        cout << (1 << n/2);
        return;
    }
    // int dp[100];
    // for(int i = 0; i <= 99; ++i)
    //     dp[i] = 0;
    
    // dp[2] = 2;




}



int main(){
    solve();
    return 0;
}
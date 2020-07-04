#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, d, ans = 0;
    cin >> n >> d;
    string s;
    cin >> s;
    int x = 0;
    while(x < n - 1){
        int i = -1;
        bool jump = false;
        for(i = x + d; i >= x + 1; --i){
            if(i < n && s[i] == '1'){
                x = i;
                ans ++;
                jump = true;
                break;
            }
        }
        if(!jump){
            ans = -1;
            break;
        }
        // if(i == x){
        //     ans = -1;
        //     break;
        // }
    }
    cout << ans << "\n";
}

int main(){
    solve();
    return 0;
}
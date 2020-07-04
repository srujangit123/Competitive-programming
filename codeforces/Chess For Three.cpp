#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, p, prev = 1, spec = 2, ans = 1;
    cin >> n;
    while(n--){
        // cout << "HE" << " ";
        cin >> p;
        if(p == prev || p == spec){
            spec = 6 - (prev + spec);
            prev = p;
            // cout << prev << " " <<spec << "\n";
        }
        else {
            ans = -1;
            // return;
        }
    }
    if(ans == -1){
        cout << "NO" << "\n";
    }
    else {
        // cout << prev << " " << spec << " ";
        cout << "YES" <<"\n";
    }
}

int main(){
    solve();
    return 0;
}
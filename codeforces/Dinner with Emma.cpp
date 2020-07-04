#include <bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
    int n, m ;
    cin >> n >> m;
    int p;
    int maxofmins = -1;
    for(int i = 1; i <= n; ++i){
        int tmin = INT32_MAX;
        for(int j = 1; j <= m; ++j){
            cin >> p;
            if(p < tmin){
                tmin = p;
            }
        }
        if(tmin > maxofmins){
            maxofmins = tmin;
        }
    }
    cout << maxofmins << "\n";
}

int main(){
    solve();
    return 0;
}
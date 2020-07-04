#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = c; i >= b; --i){
        int left = b;
        int right = c;
        while(1){
            if(left + right > i && left + i > right && right + i > left){
                cout << left << " " << i << " " << right << " ";
                return ;
            }
            else{
                break;
            }
        }
        
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
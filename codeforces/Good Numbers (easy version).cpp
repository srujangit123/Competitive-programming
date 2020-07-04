#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    while(1){
        int p = n;
        while(p > 0){
            if(p%3 == 2){
                break;
            }
            else {
                p/=3;
            }
        }
        if(p == 0){
            cout << n << "\n";
            break;
        }
        else {
            ++n;
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

// a number is good if in its ternary there is no 2
#include <bits/stdc++.h>
using namespace std;
 

void solve(){
    int n;
    cin >> n;
    if(n <= 30){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if((n - 30) != 6 && (n - 30) != 10 && (n - 30) != 14)
    cout << "6 10 14 " << n - 30 << "\n";
    else{
        cout << "6 10 15 " << (n - 31) << "\n";
    }
}




int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
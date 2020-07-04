#include <iostream>
using namespace std;

void solve(){
    int l, v, left, right;
    cin >> l >> v >> left >> right ;
    cout << l/v - (right/v - (left-1)/v) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}

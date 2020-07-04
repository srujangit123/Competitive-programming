#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n, ans = 0;
    cin >> n;
    int a[] = {1, 5, 10, 20, 100};
    for(int i = 4; i >= 0; --i){
        ans += n/a[i];
        n = n%a[i];
    }
    cout << ans << "\n";
}

int main(){
    solve();
    return 0;
}
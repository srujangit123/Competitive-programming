#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll p = n/m;
    ll sumoffirst10 = 0;
    for(int i = 1; i <= 10; ++i){
        sumoffirst10 += (m*i)%10;
    }
    ll divisors = n/m;
    ll sum = 0;
    sum += (p/10) * sumoffirst10;
    for(int i = 1; i <= p%10; ++i){
        sum += (m*i)%10;
    }
    cout << sum << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
// 3, 7
// 2, 4, 6, 
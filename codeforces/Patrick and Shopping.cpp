#include <bits/stdC++.h>
typedef long long int ll;

using namespace std;

int main(){
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    ll x1 = d1 + d2 + d3;
    ll x2 = 2 * (d1 + d2);
    ll x3 = 2 * (d1 + d3);
    ll x4 = 2 * (d2 + d3);
    ll min2 = min(x3, x4);
    ll min1 = min(x1, x2);
    ll ans = min(min1, min2);
    cout << ans;
    return 0;
}
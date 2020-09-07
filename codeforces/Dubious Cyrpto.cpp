#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
#define ll long long int
#define fok(i, k, n) for(int i = k; i < n; ++i)
#define all(X) X.begin(), X.end()
#define pb push_back
#define present(a, x) (a.find(x)!=a.end())
#define MOD 1e9+7
#define mk make_pair
#define deb(x) cout << #x << " " << (x) << "\n";
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef pair<int, int> pi;


bool isPrime(ll x) {
    for(int i = 2; i*i <= x; ++i) {
        if(x%i == 0) return false;
    }
    return true;
}


ll power(int x, int y, int p)
{
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

void solve(){
    int l, r; ll m;
    cin >> l >> r >> m;
    for(ll a = l; a <= r; ++a) {
        ll n = (m + r - l)/a;
        if(((n * a) >= (m - r + l)) && ((n * a) <= (m - l + r))) {
            ll y = m - n * a;
            if(y > 0) {
                cout << a << " " << l + y << " " << l << "\n";
            }
            else {
                cout << a << " " << l << " " << l - y << "\n";
            }
            break;
        }
    }
}


int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
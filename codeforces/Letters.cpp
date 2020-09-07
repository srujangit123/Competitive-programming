#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
#define per(i, n) for(int i = n - 1; i >= 0; --i)
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
    ll n, m;
    cin >> n >> m;
    ll a[n + 1], b[m + 1];
    a[0] = 0;
    cin >> a[0];
    for(ll i = 1; i < n ;++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for(ll j = 0; j < m ; ++j) cin >> b[j];
    for(ll i = 0; i < m ; ++i) {
        ll index = lower_bound(a, a + n, b[i]) - a;
        cout << index + 1 << " ";
        if(index == 0) {
            cout << b[i] << "\n";
        } else {
            cout << b[i] - a[index - 1] << "\n";
        }

    }

}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
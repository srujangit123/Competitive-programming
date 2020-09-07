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
    ll ans = INT64_MAX;
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll temp1 = max(a - n, x);
    ll n1 = n - (a - temp1);
    // deb(temp1);
    // deb(n1);
    if(n1 > 0) {
        ll temp11 = max(b - n1, y);
        // deb(temp11);
        ans = min(temp1*temp11, ans);
    }
    else ans = min(temp1*b, ans);
    ll temp2 = max(b - n, y);
    ll n2 = n - (b - temp2);
    // deb(temp2);
    // deb(n2);
    if(n2 > 0) {
        ll temp22 = max(a - n2, x);
        ans = min(temp2*temp22, ans);
        // deb(temp22);
    }
    else {
        ans = min(temp2*a, ans);
    }
    cout << ans << "\n";
}
 


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

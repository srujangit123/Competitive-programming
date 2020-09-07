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
    int n;
    cin >> n;
    int a[n], ans = -1;
    rep(i, n) {
        cin >> a[i];
    }
    int p = a[0], q = a[1], r = a[n - 1];
    if(p + q <= r || p + r <= q || q + r <= p) {
        cout << "1 2 " << n << "\n";
    }
    else {
        cout << "-1\n";
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
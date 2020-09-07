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
    int n, d;
    cin >> n >> d;
    ll maxi = -1;
    pair<int, int> a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    int r = 0;
    ll x = 0;
    for(int l = 0; l < n; ++l) {
        while((r < n) && (abs(a[r].first - a[l].first) < d)) {
            x += a[r].second;
            r++;
        }
        maxi = max(maxi, x);
        // deb(maxi);
        x -= a[l].second;
    }
    cout << maxi << "\n";
}




int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
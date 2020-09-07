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

int n, m;
    

void solve(){
    cin >> n >> m;
    vector<int> a, b;
    a.resize(n);
    b.resize(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    if(a == b) {
        cout << "0\n";
        return;
    }
    int ans = m;
    sort(b.begin(),b.end());
    for(int i = 0; i < n; ++i) {
        int x = (b[i] - a[0] + m)%m;
        vector<int> temp;
        for(int j = 0; j < n; ++j) {
            temp.pb((a[j] + x)%m);
        }
        sort(temp.begin(), temp.end());
        if(temp == b) {
            ans = min(ans, x);
        }

    }
    cout << ans << "\n";
}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
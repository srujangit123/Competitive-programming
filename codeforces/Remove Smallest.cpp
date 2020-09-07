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
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i) {
        if(a[i + 1] - a[i] <= 1) {
            cnt ++;
        }
    }
    if(cnt == n - 1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
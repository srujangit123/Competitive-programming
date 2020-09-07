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
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    int minia = *min_element(a, a + n);
    int minib = *min_element(b, b + n);
    ll cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(b[i] == minib) {
            if(a[i] > minia) {
                cnt += a[i] - minia;
                continue;
            }
        }
        if(a[i] == minia) {
            if(b[i] > minia) {
                cnt += b[i] - minib;
                continue;
            }
        }
        int x = min(a[i] - minia, b[i] - minib);
        a[i] -= x;
        b[i] -= x;
        cnt += x;
        if(a[i] != minia) {
            cnt += a[i] - minia;
            continue;
        }
        if(b[i] != minib) {
            cnt += b[i] - minib;
        }
    }
    cout << cnt << "\n";
}


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
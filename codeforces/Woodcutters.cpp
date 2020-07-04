#include <bits/stdc++.h>
#define fo(i, n) for(int i = 0; i < n; ++i)
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
    int n, x, h;
    cin >> n;
    // deb(n);
    vector<pair<int, int> > a;
    fo(i, n){
        cin >> x >> h;
        a.pb(mk(x, h));
    }
    int ans = 1;
    int left = a[0].first;
    fok(i, 1, n - 1){
        if((a[i].first - a[i].second > left)){
            ans ++;
            // cout << "fell " << a[i].first << " left\n";
            left = a[i].first;
        }
        else {
            if(a[i].first + a[i].second < a[i + 1].first){
                ans ++;
                // cout << "fell " << a[i].first << " right\n";
                left = a[i].first + a[i].second;
            }
            else {
                left = a[i].first;
            }
        }
    }
    if(n >= 2){
        ans++;
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
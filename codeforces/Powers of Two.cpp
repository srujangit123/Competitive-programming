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

ll n;


ll countBits(ll number) { 
      return (ll)log2(number)+1; 
}


ll get_max_sum(ll a[]) {
    if(n == 1) {
        return a[0];
    }
    sort(a, a + n);
    return a[n - 1] + a[n - 2];
}

ll get_max_ele(ll a[]) {
    sort(a, a + n);
    return a[n - 1];
}


void solve(){
    cin>>n;
    ll a[n];
    unordered_map<ll, ll> m;
    rep(i,n) {
        cin >> a[i];
        m[a[i]]++;
    }
    ll ans = 0;
    // deb(m[1]);
    ll max_sum = get_max_sum(a);
    ll max_ele = get_max_ele(a);
    // deb(max_sum);
    for(ll i = 0; i < n; ++i) {
        m[a[i]]--;
        // cout << "------------------\n";
        ll bits = countBits(a[i]);
        ll fp = (1 << (bits));
        // cout << i << " iteration, fp is " << fp << " bits is "  << bits <<"\n";
        // cout << "-------------------\n";
        while(fp <= max_sum) {
            if(m[fp - a[i]]) {
                ans += m[fp - a[i]];
            } 
            else if(fp - a[i] > max_ele) {
                break;
            }
            fp = fp<<1;
        }
    }
    cout << ans ;

}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
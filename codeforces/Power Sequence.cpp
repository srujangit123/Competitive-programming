#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>

// using namespace boost::multiprecision;
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


ll power(ll x, ll y)
{
    ll res = 1;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}

void solve() {
    ll n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    ll x = 1;
    // int y = a[n - 1];
    ll y = ceil(pow(a[n - 1], 1.0/(n - 1)));
    int z = floor(pow(a[n - 1], 1.0/(n - 1)));
    // ll ans = INT64_MAX;
    ll sum1 = 0, sum2= 0; 
    for(int i = 0; i < n; ++i) {
        sum1 += abs(pow(y, i) - a[i]);
        sum2 += abs(pow(z, i) - a[i]);
    }
    if(sum1<0)  cout<<sum2 ;
    else if(sum2<0) cout<<sum1;
    else
    cout<<min(sum1,sum2)<<endl;
    // cout << ans << "\n";
}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}








// void solve(){
//     int n;
//     cin >> n;
//     ll a[n];
//     rep(i, n) cin >> a[i];
//     sort(a, a + n);
//     rep(i, n) cout << a[i] << " ";
//     cout << endl;
//     ll high = a[n - 1];
//     ll x = floor(sqrt(high));
//     ll y = ceil(sqrt(high));
//     ll ans1 = 0, ans2 = 0;
//     for(int i = 0; i < n; ++i) {
//         cout << "-------i -> " << i << "\n";
//         ans1 += abs(pow(x, i) - a[i]);
//         ans2 += abs(pow(y, i) - a[i]);
//         deb(ans1);
//         deb(ans2);
//         cout << "------------------------\n";
//     }

//     // cout << min(ans1, ans2) << "\n";
// }
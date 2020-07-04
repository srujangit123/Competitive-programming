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
    int n, a, b, k, ans = 0;
    cin >> n >> a >> b >> k;
    vi h(n);
    fo(i, n){
        cin >> h[i];
        if(h[i]%(a + b)!=0) h[i]%=(a + b);
        else h[i] = a + b;
        h[i] = ceil((double)h[i]/a) - 1;
    }
    sort(all(h));
    fo(i, n){
        if(k - h[i] < 0) break;
        ans++;
        k -= h[i];
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
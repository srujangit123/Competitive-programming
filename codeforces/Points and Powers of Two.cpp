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
    int a[n];
    int ans = 1;
    rep(i, n) cin >> a[i];
    int o = a[0], two = 1e9 + 7, three = 1e9 + 7;
    sort(a, a + n);
    int m = a[n - 1];
    // int p = floor(log2(a[n - 1]));
    bool flag = true;
    for(int i = 0; i < n - 1; ++i) {
        int y = 1;
        while(y <= abs(a[n - 1])) {
            int temp = 1, wo, wt, wth;
            bool wtb = false, wthr = false;
            wo = a[i];
            if(binary_search(a, a + n, a[i] + y)) {
                temp++;
                wt = a[i] + y;
                wtb = true;
            }
            if(binary_search(a, a + n, a[i] + 2*y)) {
                temp++;
                wth = a[i] + 2*y;
                wthr = true;
            }
            if(temp > ans) {
                ans = temp;
                o = a[i];
                if(wtb) two = wt;
                if(wthr) three = wth;
            }
            if(ans == 3) {
                flag = false;
                break;
            }
            y *= 2;
        }
        if(!flag) break;
    }
    cout << ans << "\n";
    cout << o << " ";
    if(two != (1e9 + 7)) {
        cout << two << " ";
    }
    if(three != (1e9 + 7)) {
        cout << three << " ";
    }
    cout << "\n";
}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
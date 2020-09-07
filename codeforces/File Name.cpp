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
    string s;
    cin >> s;
    int ans = 0;
    int start = -1, end = -1;
    bool started = false;
    rep(i, n) {
        if(s[i] == 'x') {
            if(!started) start = i;
            else         end = i;
            started = true;
        }
        else {
            started = false;
            int length = end - start + 1;
            if(length >= 2) {
                ans += length - 2;
            }
            start = -1;
            end = -1;
        }
    }
    if(started = true) {
        int length = end - start + 1;
        if(length >= 2) ans += length - 2;
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
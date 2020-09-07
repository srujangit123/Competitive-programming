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
    map<int, int> m;
    int a[n];
    rep(i, n) {
        cin >> a[i];
        m[a[i]]++;
    }
    vector<int> missing;
    for(int i = 1; i <= n; ++i) {
        if(m[i] == 0) {
            missing.push_back(i);
        }
    }
    // for(int i : missing) {
    //     cout << i << " ";
    // }
    // cout << endl;
    if(missing.empty()) {
        cout << "0\n";
        for(int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    int cnt = 0;
    sort(missing.begin(), missing.end());
    int mindex = 0;
    vector<bool> vis(n + 1, false);
    for(int i = 0; i < n; ++i) {
    int temp = a[i];    
        if(m[a[i]] >= 2) {
            if(a[i] >= missing[mindex]) {
                m[a[i]]--;
                a[i] = missing[mindex++];
                cnt++;
            }
            else {
                if(vis[a[i]]) {
                    m[a[i]]--;
                    a[i] = missing[mindex++];
                    cnt++;
                }
                vis[temp] = true;
            }
        }
        // vis[temp] = true;
    }
    cout << cnt << "\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main(){
// vis to get lexicogra... because in the first occurance of a number if(a[i] < missing(mindex)) first time we shouldn't put

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

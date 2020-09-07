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


int getPairsCount(int arr[], int n, int sum) {
    bool vis[n] = {false};
    int res = 0;
    for(int i = 0; i < n; ++i) {
        if(vis[i]) continue;
        for(int j = i + 1; j < n; ++j) {
            if(!vis[i] && !vis[j] && (arr[i] + arr[j] == sum)) {
                res ++;
                vis[i] = true;
                vis[j] = true;
                break;
            }
        }
    }
    return res;
} 


void solve(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << "0\n";
        return;
    }
    if(n <= 3) {
        cout << "1\n";
        return;
    }
    set<int> sums;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            sums.insert(a[i] + a[j]);
        }
    }
    int ans = 0;
    for (auto it = sums.begin(); it != sums.end(); ++it){ 
        int pairs = getPairsCount(a, n, *it);
        // cout << "----------------------\n";
        // deb(pairs);
        // deb(*it);
        ans = max(pairs, ans);
    } 
    cout << ans << "\n";
}


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
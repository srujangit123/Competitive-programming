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
    int k;
    cin >> k;
    set<int> done;
    map<int, vector<pair<int, int> > > m;
    for(int i = 0; i < k; ++i) {
        done.clear();
        int n, x;
        cin >> n;
        int sum = 0;
        int a[n];
        for(int j = 0; j < n; ++j) {
            cin >> a[j];
            sum += a[j];
        }
        for(int j = 0; j < n; ++j) {
            if(done.find(sum - a[j]) == done.end()) {
                m[sum - a[j]].push_back({i, j});
                done.insert(sum - a[j]);
            }
        }
    }

    for(auto i : m) {
        // deb(i.first);
        if(i.second.size() >= 2) {
            cout << "YES\n";
            cout << i.second[0].first + 1 << " " << i.second[0].second + 1 << "\n";
            cout << i.second[1].first + 1 << " " << i.second[1].second + 1 << "\n";
            return ;
        }
    }
    cout << "NO\n";
}   


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
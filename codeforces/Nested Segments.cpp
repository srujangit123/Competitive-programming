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

bool compare(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b) {
    return (a.first.first < b.first.first);
}


void solve(){
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int> > a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first.first >> a[i].first.second;
        // deb(a[i].first.first);
        a[i].second = i;
    }
    // for(int i = 0; i < n; ++i) {
    //     cout << a[i].first.first << " " << a[i].first.second << "\n";
    // } 
    sort(a.begin(), a.end(), compare);
    // deb(a.size());
    // for(int i = 0; i < n; ++i) {
    //     cout << a[i].first.first << " " << a[i].first.second << "\n";
    // }
    for(int i = 1; i < n; ++i) {
        if(a[i].first.first >= a[i - 1].first.first && a[i].first.second <= a[i - 1].first.second) {
            cout << a[i].second + 1 << " " << a[i - 1].second + 1 << "\n";
            return;
        }
    }
    reverse(a.begin(), a.end());
    for(int i = 1; i < n; ++i) {
        if(a[i].first.first >= a[i - 1].first.first && a[i].first.second <= a[i - 1].first.second) {
            cout << a[i].second + 1 << " " << a[i - 1].second + 1 << "\n";
            return;
        }
    }
    cout << "-1 -1\n";
}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

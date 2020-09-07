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
    bool cnt[n][n];
    for(int i = 0; i <= n - 1; ++i) {
        // string temp(n, '0');
        // for(int j = i; j < n; ++j) {
        //     temp[j - i] = s[i];
        // }
        string temp = s.substr(i, n);
        for(int j = 0; j < temp.size(); ++j) {
            if(temp[j] == '1') cnt[i][j] = true;
            else cnt[i][j] = false;
        }
    }
    // cout << cnt[0][0] << "\n";
    // if(cnt[0][0]) {
    //     cout << "yes\n";
    // }
    // for(int i = 0; i < n; ++i) {
    //     for(int j = 0; j < n; ++j) {
    //         cout << cnt[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int index = -1;
    string ans(n, '0');
    char c;
    for(int i = 0; i < n; ++i) {
        bool ok = true;
        for(int j = 0; j < n; ++j) {
            if(cnt[j][i] != cnt[0][i]) {
                ok = false;
            }
        }
        if(ok) {
            ans[i] = (cnt[0][i])?'1':'0';
        }
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

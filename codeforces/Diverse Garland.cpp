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

char change(string s, int prev, int cur, int next) {
    char a[3] = {'R', 'G', 'B'};
    if(next == s.size()) {
        for(int i = 0; i < 3; ++i) {
            if(s[prev] != a[i]) {
                return a[i];
            }
        }
    }
    else {
        for(int i = 0; i < 3; ++i) {
            if(s[prev] != a[i] && s[next] != a[i]) {
                return a[i];
            }
        }
    }
}



void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dp[n] = {0};
    for(int i = 1; i < n; ++i) {
        if(s[i] == s[i - 1]) {
            dp[i] = dp[i - 1] + 1;
            s[i] = change(s, i - 1, i, i + 1);
        }
        else {
            dp[i] = dp[i - 1];
        }
    }
    cout << dp[n - 1] << "\n";
    cout << s;
 }


int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
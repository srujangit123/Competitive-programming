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
    int n, k;
    ll ans = 0;
    cin >> n >> k;
    string s[n];
    unordered_set<string> st;
    fo(i, n) {
        cin >> s[i];
        st.insert(s[i]);
    }
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            string x = "";
            for(int p = 0; p < k; ++p) {
                if(s[i][p] == s[j][p]) {
                    x += s[i][p];
                } else {
                    string temp = "SET";
                    for(int y = 0; y < 3; ++y) {
                        if(temp[y] != s[i][p] && temp[y] != s[j][p]) {
                            x += temp[y];
                        }
                    }
                }
            }
            if(st.find(x) != st.end()) {
                ans++;
            }
        }
    }
    cout << ans/3 << "\n";
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
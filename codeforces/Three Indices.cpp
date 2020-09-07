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
    int n;
    cin>> n;
    vector<int> a;
    a.resize(n);
    map<int, int> m;
    fo(i, n) {
        cin >> a[i];
        m[a[i]] = i;
    }
    vector<int> b = a;
    sort(b.begin(), b.end(), greater<int>());
    fo(i, n) {
        if(m[b[i]] == 0 || m[b[i]] == n - 1) continue;
        if(a[m[b[i]] - 1] < b[i] && b[i] > a[m[b[i]] + 1]) {
            cout << "YES\n";
            cout << m[b[i]] - 1 + 1 << " " << m[b[i]] + 1 << " " << m[b[i]] + 1 + 1 << "\n";
            return;
        }
    }
    cout << "NO\n";
}


int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
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
    int a, b;
    cin >> a >> b;
    vector<int> ops;
    ops.push_back(b);

    while(b != a) {
        if(b%10 == 1) {
            b/=10;
            ops.push_back(b);
        } else if(b%2 == 0){
            b/=2;
            ops.push_back(b);
        } else {
            break;
        }
        if(b < a) break;
    }
    if(a == b) {
        cout << "YES\n" << ops.size() << "\n";
        for(int i = (int)ops.size() - 1; i >= 0; --i) {
            cout << ops[i] << " ";
        }

    }
    else {
        cout << "NO";
        // for(int i = (int)ops.size() - 1; i >= 0; ++i) {
        //     cout << ops[i] << " ";
        // }
    }
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
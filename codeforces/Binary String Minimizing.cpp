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
    ll n, k, pos = -1;
    cin >> n >> k;
    string s;
    cin >> s;
    for(ll i = 0; i < n; ++i) {
        if(s[i] == '1') {
            pos = i;
            break;
        }
    }
    if(pos == -1) {
        cout << s << "\n";
        return;
    }
    // cout << pos << "\n";
    for(ll i = pos + 1; i < s.length(); ++i) {
        if(s[i] == '0') {
            if(k <= 0) break;
            // cout << "------" << i <<"-------\n";
            // cout << "s before is " << s << "\n";
            ll shift = i - pos;
            if(shift <= k) {
                s[pos] = s[i];
                s[i] = '1';
                k -= shift;
                ++pos;
            }
            else {
                s[i - k] = s[i];
                s[i] = '1';
                k = 0;
            }
            // cout << "s after  is " <<  s << "\n-------------\n";
        }
    }
    cout << s << "\n";
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
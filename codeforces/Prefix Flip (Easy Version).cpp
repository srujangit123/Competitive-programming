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
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> result;
    for(int i = (int)b.length() - 1; i > 0; --i) {
        if(a[i] != b[i]) {
            // cout << "-----------------\n";
            if(a[0] != a[i]) {
                // cout << "here\n";    
                result.push_back(1);
                a[0] = a[i];
            }
            string sub = a.substr(0, i + 1);
            // cout << "sub before loop is " << sub << " ";
            for(int j = 0; j < (int)sub.length(); ++j) {
                if(sub[j] == '1') sub[j] = '0';
                else              sub[j] = '1';
            }
            // cout << "sub is " << sub << " and ";
            reverse(sub.begin(), sub.end());
            // cout << "sub(reverse) is " << sub << " and a before replace is " << a << endl;
            a.replace(a.begin(), a.begin() + i + 1, sub);
            // cout << "i is " << i << " and a is " << a << endl;
            // cout << "-------------------\n";
            result.push_back(i + 1);
        }
    }
    if(a[0] != b[0]){
        result.push_back(1);
        a[0] = b[0];
    }
    cout << result.size() << " ";
    for(int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";
    // cout << "a is " <<a;
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
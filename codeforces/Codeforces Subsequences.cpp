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

void wrong(){
    ll k;
    cin >> k;
    string s(9 + k, 's');
    s.replace(s.begin(), s.begin() + 9, "codeforce");
    cout << s;
}
// this is wrong as u are using extra k - 1 characters to get k subsequences which is almost same as k which is not minimum.
// For example if I use ccooddeforces -> 3 extra characters to get 8 subsequences which is minimum than previous.
// If the spread of the additional chars among c,o,d,e which then becomes evenly distributed we can get k subs with min length string.
ll ar[11];

bool isValid(ll k) {
    ll res = 1;
    for(int i = 1; i <= 10; ++i) {
        res *= ar[i];
        if(res >= k) return true;
    }
    return false;
}



void solve() {
    string s = "codeforces";
    for(int i = 1; i <= 10; ++i) ar[i] = 1;
    ll k;
    cin >> k;
    int x = 0;
    if(k > 1) {
        while(1) {
            x++;
            if(x > 10) x = 1;
            ar[x]++;
            if(isValid(k)) break;
        }
    }
    for(int i = 1; i <= 10; ++i) {
        while(ar[i]--) {
            cout << s[i - 1];
        }
    }
}


int main(){


    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
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
    int n, x, y;
    cin >> n >> x >> y;
    int val = y - x;
    set<int> s;
    for(int i = 1; i * i <= val; ++i) {
        if(val%i == 0) {
            s.insert(i);
            s.insert(val/i);
        }
    }
    // for(int i : s) {
    //     cout << i << " ";
    // }
    // cout << endl;
    int maxi = 1e9;
    int ans = -1;
    vector<int> res;
    for(int i : s) {
        if(val/i > n) continue;
        int cnt = 1;
        vector<int> ss;
        ss.push_back(y);
        int temp = y - i;
        bool ok = false;
        while(temp > 0 && ss.size() < n) {
            ss.push_back(temp);
            temp -= i;
            if(ss[ss.size() - 1] == x) {
                ok = true;
            }
        }
        if(!ok) continue;
        int maxx = y;
        temp = y + i;
        while(ss.size() < n) {
            ss.push_back(temp);
            temp += i;
        }
        maxx = max(y, ss[ss.size() - 1]);
        if(maxi > maxx) {
            ans = i;
            maxi = maxx;
            res = ss;
        }
    }
    // cout << maxi << " " << ans << endl;
    for(int i : res) {
        cout << i << " ";
    }
    cout << endl;
}


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

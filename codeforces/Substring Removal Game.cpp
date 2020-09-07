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
    string s;
    cin >> s;
    int cnt = 0, start = -1, end = -1;
    vector<int> p;
    bool started = false;
    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] == '1') {
            if(!started) {
                start = i;
                started = true;
            }
            else {
                end = i;
            }
        }
        else {
            if(started) {
                if(end == -1) p.pb(1);
                else p.pb(end - start + 1);
            }
            started = false;
            start = -1;
            end = -1;
        }
    }
    if(end != -1 && start != -1)
        p.pb(end - start + 1);
    if(start != -1 && end == -1) p.pb(1);
    if(p.empty()) {
        cout << "0\n";
        return;
    }
    // for(auto i : p) {
    //     cout << i << " ";
    // }
    // cout << endl;
    sort(p.begin(), p.end());
    for(int i = p.size() - 1; i >= 0; i -= 2) {
        cnt += p[i];
    }
    cout << cnt << "\n";
}


int main(){


    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
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



void solve(){
    int n;
    cin >> n;
    map<int, int> m;
    string s;
    cin >> s;
    ll sum = 0;
    ll ans = 0;
    m[0] = 1;
    for(int i = 0; i < n; ++i) {
        int ele = s[i] - '0';
        ele--;
        sum += ele;
        ans += m[sum];
        m[sum]++;
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
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


set<string> all;

void printAllKLengthRec(char set[], string prefix, int n, int k) {
    if (k == 0) {
        all.insert(prefix);
        return;
    }
    for (int i = 0; i < n; i++) { 
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
}

void printAllKLength(char set[], int k,int n) { 
    printAllKLengthRec(set, "", n, k);
}


void solve(){
    int n;
    cin >> n;
    string str;
    set<string> s[21];
    for(int i = 0; i < n; ++i) {
        cin >> str;
        int size = (int)str.size();
        for(int j = 0; j < size; ++j) {
            char c = str[j];
            for(int k = 1; k <= size - j; ++k) {
                string x = str.substr(j, k);
                s[k].insert(x);

            }
        }
    }
    char set[26];
    for(int i = 0; i < 26; ++i) set[i] = 'a' + i;

    for(int i = 1; i < 21; ++i) {
        int p = 26 * i;
        if(s[i].size() == p) continue;
        all.clear();
        printAllKLength(set, i, 26);
        for(string x : all) {
            if(s[i].find(x) == s[i].end()) {
                cout << x << "\n";
                return;
            }
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

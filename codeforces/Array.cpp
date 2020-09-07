/***********************************************
 * Problems suggested by a20j ladders(<=1499)  *
 * Author: codeforces.com/profile/geek23       *
 * github: github.com/srujangit123             *
 * NITK CS 2023                                *
 ***********************************************
*/


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


void solve(){
    int n;
    cin >> n;
    int temp;
    vector<int> one, sec, th;
    fo(i,n) {
        cin>> temp;
        if(temp < 0) one.push_back(temp);
        else if(temp > 0) sec.push_back(temp);
        else th.push_back(temp);
    }
    if(sec.empty()) {
        sec.push_back(one[one.size() - 1]);
        one.pop_back();
        sec.push_back(one[one.size() - 1]);
        one.pop_back();
    }
    if(one.size()%2 == 0) {
        th.push_back(one[one.size() - 1]);
        one.pop_back();
    }
    cout << one.size() << " ";
    for(int i : one) cout << i << " ";
    cout << endl;
    cout << sec.size() << " ";
    for(int i : sec) cout << i << " ";
    cout << endl;
    cout << th.size() << " ";
    for(int i : th) cout << i << " ";
    cout << endl;
}


int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
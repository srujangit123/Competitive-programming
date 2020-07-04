#include <bits/stdc++.h>
#define fo(i, n) for(int i = 0; i < n; ++i)
#define ll long long int
#define fok(i, k, n) for(int i = k; i < n; ++i)
#define MOD 1000000000+7
#define all(X) X.begin(), X.end()
#define pb push_back
#define present(a, x) (a.find(x)!=a.end())

using namespace std;
int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n, vector<int>(2));
    fo(i, n) fo(j, 2) cin >> a[i][j];
    int count = 0;
    fo(i, n){
        fo(j, n){
            if(j!=i && a[i][0] == a[j][1]){
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}
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
    int n, m;
    cin >> n >> m;
    bool toggle = true;
    vector< vector<char> > a(n, vector<char>(m, '#'));
    for(int i = 1; i < n; i+=2){
        if(toggle){
            for(int j = 0 ; j < m-1; ++j)
                a[i][j] = '.';
            toggle = false;
        }
        else{
            for(int j = 1; j < m; ++j){
                a[i][j] = '.';
            }
            toggle = true;
        }
    }
    fo(i, n){
        fo(j, m){
            cout << a[i][j];
        }
        cout << "\n";
    }

    return 0;
}
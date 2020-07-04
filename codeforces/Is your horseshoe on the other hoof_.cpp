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
    vector<ll> a(4);
    vector<ll> b;
    int count = 0;
    fo(i, 4) cin >> a[i];
    for(int i = 0; i < 4; ++i){
        if(a[i]!=0){
            for(int j = i + 1; j < 4; ++j){
                if(a[i]==a[j]){
                    a[j] = 0;
                }
            }
        }
    }
    for(int i = 0; i < 4; ++i){
        if(a[i]!=0){
            count++;
        }
    }
    // for(int i = 0; i < 4; ++i) cout << a[i] << " ";
    cout <<4 - count ;
    return 0;
}
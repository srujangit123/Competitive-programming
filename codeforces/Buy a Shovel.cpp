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
    int k, r;
    cin >> k >> r;
    int ans = 0;
    for(int i = 1; ;++i){
        if((k * i)%10 == 0 || (k * i - r)%10 == 0){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}
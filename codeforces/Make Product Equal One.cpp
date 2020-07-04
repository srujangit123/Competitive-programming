#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, product = 1, k = 0, p = 0, q = 0;
    ll ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(!a[i]) k++;
    }
    
    for(int i = 0; i < n; ++i){
        if(a[i] > 0){
            ans += a[i] - 1;
            p++;
            product *= 1;
        }
        else if(a[i] < 0){
            ans += -1-a[i];
            q++;
            product *= -1;
        }
        else {

        }
    }
    if(k != 0){
        cout << ans + k << "\n";
        return ;
    }

    if(product == 1){
        cout << ans << "\n";
        return ;
    }
    
    if(product == -1){
        cout << ans + 2 << "\n";
    }

}

int main(){
    solve();
    return 0;
}
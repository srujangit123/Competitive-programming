#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum!=0){
        cout << "YES\n1\n1 " << n << "\n";
        return;
    }
    sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += a[i];
        if(sum != 0){
            cout << "YES\n2\n" << "1 " << i << "\n" << i + 1 << " " << n << "\n";
            return ;
        }
    }
    cout << "NO" << "\n";
}


int main(){
    solve();
    return 0;
}
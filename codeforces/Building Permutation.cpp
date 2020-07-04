#include <bits/stdc++.h>
using namespace std;

int a[3000002];

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    // vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <=n; ++i){
        ans += ((long long)(a[i] - i)) > 0? (long long)(a[i] - i) : (long long)(i - a[i]); 
    }
    cout << ans << "\n";
    // for(int i = 0; i < n; ++i)
    return 0;
}
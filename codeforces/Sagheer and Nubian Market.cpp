#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << #x << " " << (x) << "\n";
using namespace std;


int main(){
    int n;
    ll s;
    cin >> n >> s;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    ll sans = 0;
    int ans = 0;
    int p = 1, q = n;
    while(p <= q) {
        int k = (p + q)/2;
        ll temp[n + 1];
        for(int i = 1; i <= n; ++i) {
            temp[i] = a[i] + (ll)i * k;
        }
        sort(temp + 1, temp + n + 1);
        ll sum = 0;
        for(int i = 1; i <= k; ++i) {
            sum += temp[i];
        }
        if(sum <= s) {
            ans = k;
            sans = sum;
            p = k + 1;
        }
        else {
            q = k - 1;
        }
    }

    cout << ans << " " << sans << "\n";
    return 0;
}

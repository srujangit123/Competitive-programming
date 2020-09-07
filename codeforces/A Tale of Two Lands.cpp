#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int binarySearch(int a[], int l, int r, int x) {
    int res = -1;
    while(l < r) {
        int mid = (l + r)/2;
        int p = abs(x - a[mid]);
        int q = abs(x + a[mid]);
        int left = min(abs(a[mid]), abs(x));
        int right = max(abs(a[mid]), abs(x));
        if((q >= right && p <= left) || (q <= left && p >= right)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r;
}


int main(){
    int n;
    cin >> n;
    int a[n];
    int x;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        a[i] = abs(x);
    }
    sort(a, a + n);
    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        ans += upper_bound(a, a + n, 2 * a[i]) - a - i - 1;
    }
    cout << ans ;
    return 0;
}

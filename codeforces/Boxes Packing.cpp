#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int vis = n ;
    for(int i = 0; i < n; ++i)  cin >> a[i];
    sort(a, a + n);
    bool hasbox[n] = {false};
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i] < a[j] && !hasbox[j]) {
                vis--;
                hasbox[j] = true;
                break;
            }
        }
    }
    cout << vis << "\n";
    return 0;
}
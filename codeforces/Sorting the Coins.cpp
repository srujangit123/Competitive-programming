#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int maxi = 0;
    string x(n, 'o');
    cout << "1 ";
    int z = n - 1;
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i) {
        // we need to check the last block of 0 and answer will be number of 1's before it.
        x[a[i] - 1] = 'x';
        if((a[i] - 1) == z) {
            int j = z - 1;
            while(x[j] != 'o') {
                j--;
                cnt--;
            }
            z = j;
        }
        else {
            if(z > a[i] - 1) {
                cnt++;
            }
        }
        // cout << z << ",";
        cout << cnt + 1 << " ";
    }
    cout << "1 ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; ++i) {
        int a[10] = {0};
        int n = i;
        while(n > 0) {
            a[n%10]++;
            n/=10;
        }
        bool isval = true;
        for(int j = 0; j < 10; ++j) {
            if(a[j] >= 2) {
                isval = false;
                break;
            }
        }
        if(isval) {
            cout << i << "\n";
            exit(0);
        }
    }
    cout << "-1\n";
    return 0;
}
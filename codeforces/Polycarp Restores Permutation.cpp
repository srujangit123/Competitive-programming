#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool vis[200002];
int main() {
    int n;
    cin >> n;
    int q[n], p[n];
    ll sum = 0, minsum = 0;
    for(int i = 0; i < n - 1; ++i) {
        cin >> q[i];
        sum += q[i];
        minsum = min(minsum, sum);
    }
    p[0] = 1 - minsum;
    bool flag = true;
    if(p[0] <= 0 || p[0] > n) flag = false;
    else        vis[p[0]] = true;
    for(int i = 1; i < n; ++i) {
        p[i] = q[i - 1] + p[i - 1];
        if(p[i] < 0 || p[i] > n || vis[p[i]]) {
            flag = false;
            break;
        }
        vis[p[i]] = true;
    }
    if(flag) {
        for(int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
    }
    else {
        cout << "-1\n";
    }
    return 0;
}
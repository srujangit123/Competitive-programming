#include <bits/stdc++.h>
using namespace std;

long long int a[102];
deque<long long int> ans;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    bool vis[n];
    memset(vis, false, n);
    ans.push_back(a[0]);
    vis[0] = true;
    while(ans.size() != n) {
        for(int j = 0; j < n; ++j) {
            if(!vis[j]) {
                if(ans.back() == a[j]/2 && a[j]%2 == 0) { ans.push_back(a[j]); vis[j] = true; continue; }
                if(ans.back() == 3 * a[j])              { ans.push_back(a[j]); vis[j] = true; continue;}
                if(ans.front() == 2 * a[j])             { ans.push_front(a[j]); vis[j] = true; continue; }
                if(ans.front() == a[j]/3 && a[j]%3 ==0 ){ ans.push_front(a[j]); vis[j] = true; continue; }
            }
        }
    }
    for(long long int i : ans) {
        cout << i << " ";
    }
    return 0;
}
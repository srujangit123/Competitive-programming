#include <bits/stdc++.h>
#define deb(x) cout << #x << " " << (x) << "\n";

using namespace std;

void solv1e() {
    int n, r, x;
    cin >> n >> r;
    vector<int> a;
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        if(x) a.push_back(x);
    }
    if(a.size() == 0) {
        cout << "-1\n";
        return;
    }
    if(a.size() == 1) {
        if(a[0] - r + 1 <= 1 && r + a[0] - 1 >= n) cout << "1\n";
        else cout << "-1\n";
        return;
    }
    int left = -1;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] - r + 1 <= 1) left = i;
    }
    if(left == -1) {
        cout << "-1\n";
        return;
    }
    // for(int i = left + 1; )
}






void solve() {
    int n, r;
    int x;
    cin >> n >> r;
    vector<int> a;
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        if(x) a.push_back(i);
    }
    // for(auto i : a) {
    //     cout << i << " ";
    // }
    // cout << endl;
    if(a.size() == 0) {
        cout << "-1\n";
        return;
    }
    if(a.size() == 1) {
        if(a[0] - r + 1 <= 1 && r + a[0] - 1 >= n) cout << "1\n";
        else cout << "-1\n";
        return;
    }
    // start here
    int left = -1, right = -1;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] - r + 1 <= 1) left = i;
    }
    for(int i = a.size() - 1; i >= 0; --i) {
        if(a[i] + r - 1 >= n) right = i;
    }
    // deb(left);
    // deb(right);
    if(left == right) {
        cout << "1\n";
        return;
    }
    if(left == -1 || right == -1) {
        cout << "-1\n";
        return;
    }
    if(left > right) {
        cout << "1\n";
        return;
    }
    // vector<int> res;
    int ans = 2;
    // res.push_back(left);
    // res.push_back(right);
    for(int i = left; i < right; ) {
        int index;
        bool flag = false;
        for(int j = i + 1; j <= right; ++j) {
            if(2* (r - 1) >= a[j] - a[i] - 1) {
                index = j;
                flag = true;
            }
            else {
                break;
            }
        }
        if(!flag) {
            // deb(i);
            cout << "-1\n";
            return;
        } else {
            i = index;
            // res.push_back(index);
            if(index != right) ans++;
        }
    }
    cout << ans << "\n";
    // for(auto i : res) {
    //     cout << i << " ";
    // }
}




int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector< pair<int, int> > p(n);
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        // p[i].make_pair(a, b);
        p[i].first = a;
        p[i].second = b;
    }
    sort(p.begin(), p.end());
    int days = -1;

    for(int i = 0; i < n; ++i){
        if(days <= p[i].second){
            days = p[i].second;
        }
        else {
            days = p[i].first;
        }
    }
    cout << days << "\n"; 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, vector<int> &b){
    a[0] = b[0];
    int maxelement = a[0];
    for(int i = 1; i < b.size(); ++i){
        a[i] = b[i] + max(0, maxelement);
        if(maxelement < a[i]) 
            maxelement = a[i];
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; ++i) cin >> b[i];
    vector<int> a(n);
    solve(a, b);
    for(int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}
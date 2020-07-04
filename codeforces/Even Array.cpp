#include <bits/stdc++.h>
using namespace std;

bool rightpos(int n, int index){
    if(index%2 == 0 && n%2 == 0){
        return true;
    }
    if(index %2!= 0 && n%2 != 0){
        return true;
    }
    return false;
}


void solve(){
    int n, cnt = 0;
    cin >> n;
    int a[n + 1], evenreq = 0, oddreq = 0;
    if(n %2 == 0){
        evenreq = n/2;
        oddreq = evenreq;
    }
    else {
        oddreq = n/2;
        evenreq = n - oddreq;
    }
    int even = 0, odd = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] %2 == 0) even ++;
        else odd++;
        if(!rightpos(a[i], i)) cnt ++;
    }
    
    if(evenreq != even || oddreq != odd) cout << "-1\n";
    else cout << cnt/2 << "\n";
}


int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
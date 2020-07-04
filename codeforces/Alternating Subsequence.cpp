#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll n){
    if(n > 0){
        return true;
    }
    return false;
}


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector < int > a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        bool toggle = (a[0] > 0)? true: false;
        ll sum = 0;
        auto start = a.begin();
        for(auto it = a.begin() + 1; it != a.end(); ++it){
            if(check(*it) == toggle){
                continue;
            }
            else{
                sum += *max_element(start, it);
                start = it;
                toggle = !toggle;
            }
        }
        sum += *max_element(start, a.end());
        cout << sum << "\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i){
        if(sqrt(a[i]) == ((ll)sqrt(a[i])) && a[i]!=1){
            ll p = sqrt(a[i]);
            int flag = 1;
            for(int i = 2; i * i <= p ; ++i){
                if(p%i == 0){
                    cout << "NO" << "\n";
                    flag = 0;
                    break;
                }
            }
            if(flag){
                cout << "YES" << "\n";
            }
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;

}
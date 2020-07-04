#include <iostream>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if((n/2)%2!=0){
            cout << "NO" << "\n";
        }
        else {
            cout << "YES"  << "\n";
            for(ll i = 1; i <= n/2; ++i){
                cout << 2*i << " ";
            }
            ll oddsum = 0;
            for(ll i = 1; i <= n/2 - 1; ++i){
                cout << 2 * i - 1 << " ";
                oddsum += 2 * i - 1;
            }
            cout << (n * (n + 2))/4 - oddsum << "\n";
        }
    }
    
    
    return 0;
}
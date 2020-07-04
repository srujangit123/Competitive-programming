#include <iostream>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        ll k, x;
        cin >> k >> x;
        cout << (9 * k) - (ll)9 + x << "\n"; 
    }
    return 0;
}
#include <iostream>
#define ll long long int
using namespace std;

int main(){
    ll l, r;
    cin >> l >> r;
    cout << "YES" << "\n";
    ll t = l;
    while(t <= r - 1){
        cout << t << " " << t + 1 << "\n";
        t+=2;
    }
    return 0;
}
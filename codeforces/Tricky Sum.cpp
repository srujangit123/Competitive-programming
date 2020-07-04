#include <iostream>
#include <vector>
#define ll long long int 
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll rsum = 0;
        int i = 0;
        ll p = binpow(2, i);
        while(p <= n){
            rsum += p;
            i++;
            p = binpow(2, i);
        }
        ll sum = (ll)n * (n + 1)/2;
        // cout << sum << " " << rsum ;
        cout << sum - 2 * rsum << "\n";
    }
}
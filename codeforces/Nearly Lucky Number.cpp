#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll luckyn = 0;
    while(n!=0){
        ll t = n%10;
        if(t == 7 || t == 4){
            luckyn++;
        }
        n/=10;
    }
    if(luckyn == 4 || luckyn == 7){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
	return 0;
}
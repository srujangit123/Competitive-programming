#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    int count = 0;
    cin >> t;
    while(t--){
        int p, q;
        cin >> p >> q;
        if((q - p)>= 2){
            count ++;
        }
    }
    cout << count;
	return 0;
}
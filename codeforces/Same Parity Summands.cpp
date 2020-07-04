#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(int n, int k){
    // if(n%2!=0 && k%2 == 0){
    //     cout << "NO" << "\n";
    // }
    if((n - (k - 1))%2!=0 && (n - (k - 1)) > 0){
            cout << "YES" << "\n";
            int sum = 0;
            for(int i = 1; i <= k - 1; i++){
                cout << 1 << " ";
                sum += 1;
            }
            cout << n - sum << "\n";
            // cout << "\n";
        }
    else if((n - (k - 1)*2)%2 == 0 && (n - (k - 1)*2) > 0){
        cout << "YES" << "\n";
        int sum = 0;
        for(int i = 1; i <= k - 1; ++i){
            sum+=2;
            cout << 2 << " ";
        }
        cout << n - sum << "\n";

    }
    else {
        cout << "NO" << "\n";
    }
}



int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        solve(n, k);
        // if(n%2!=0 && k%2 == 0){
        //     cout << "NO" << "\n";
        // }
        // else if(k > n/2 && k!=n){
        //     cout << "NO" << "\n";
        // }
        // else if(n!=k){
        //     // ll sum = 0;
        //     cout << "YES" << "\n";
        //     if(n%2 == 0){
        //         ll sum = 0;
        //         int num = 2;
        //         for(int i = 1; i <= k - 1; ++i){
        //             cout << 2 << " ";
        //             sum += (ll) num;
        //             num +=2;
        //         }
        //         cout << n - sum << "\n";
        //     }
        //     else {
        //         ll sum = 0;
        //         int num = 1;
        //         for(int i = 1; i <= k - 1; ++i){
        //             cout << num << " ";
        //             sum += (ll) num;
        //             num +=2;
        //         }
        //         cout << n - sum << "\n";
        //     }
        // }
        // else if(n == k){
        //     cout << "YES" << "\n";
        //     for(int i = 1; i <= k; ++i){
        //         cout << 1 << " ";
        //     }
        //     cout << "\n";
        // }
    }
}



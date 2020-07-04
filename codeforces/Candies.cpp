#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3 == 0){
            cout << n/3 << "\n";
        }
        // int k = 3;
        else {
            int k = 3;
            while(1){ //for all the even cases of k n is div by 3 
                //start from k = 3 and k is odd
                int p = pow(2, k) - 1;
                if(n%p == 0){
                    cout << n/p << "\n";
                    break;
                }else{
                    k+=2;
                }
            }
        }
    }
    return 0;
}
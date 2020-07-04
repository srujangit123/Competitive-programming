#include <iostream>
using namespace std;

void solve(int n){
    //count number of digits.
    int temp = n, cnt = 0;
    while(temp!=0){
        cnt++;
        temp/=10;
    }
    // cout << 9 * 
    // cout << 9 * (cnt - 1) + n/
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n < 10){
            cout << n/1 << "\n";
        }
        else if(n <= 100){
            cout << 9 + n/11 << "\n";
        }
        else if(n <= 1000){
            cout << 18 + n/111 << "\n";
        }
        else if(n <= 10000){
            cout << 27 + n/1111 << "\n";
        }
        else if(n <= 100000){
            cout << 36 + n/11111 << "\n";
        }
        else if(n <= 1000000){
            cout << 45 + n/111111 << "\n";
        }
        else if(n <= 10000000){
            cout << 54 + n/1111111 << "\n";
        }
        else if(n <= 100000000){
            cout << 63 + n/11111111 << "\n";
        }
        else if(n <= 1000000000){
            cout << 72 + n/111111111 << "\n";
        }
    }
    return 0;
}




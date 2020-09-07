#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(n%2 == 0){
        cout << (n - 4) << " " << 4;
    }
    else {
        int a, b;
        for(int i = n - 4; i >= 0; i-=2){
            if(!prime(i)){
                cout << i << " " << n - i;
                break;
            }
        }
    }
    return 0;
}
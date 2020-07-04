#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 1;
    int x = 5;
    while(n > 0){
        if(n%2!=0){
            result = (result * x)%100;
        }
        x = (x * x)%100;
        n/=2;
    }
    cout << result ;
    return 0;
}
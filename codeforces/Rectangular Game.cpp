#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

bool prime_number(int n){
    for(int i = 2; i*i <= n; ++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}



long long solve(int n){
    if(prime_number(n)){
        return n + 1;
    }
    int t;
    for(int i = n - 1; i >= 2; --i){
        if(n%i == 0){
            t = i;
            break;
        }
    }
    return (ans + n + solve(t));

}




int main(){
    int n;
    cin >> n;
    cout << solve(n) << "\n";
    return 0;
}

/**
 * for 15 15 + 5 + 1
 * but ans shown is 15 + 7 + 1
*/
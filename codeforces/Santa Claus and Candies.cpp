#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n;
    cin >> n;
    if(n == 1 || n == 2){
        cout << "1\n" << n ;
        return;
    }
    int a[10002];
    int sum = 3;
    a[1] = 2;
    for(int i = 2; i <= 10001; ++i){
        a[i] = a[i - 1] + sum;
        sum ++;
    }
    int index = -1;
    for(int i = 2; i <= 10001; ++i){
        if(n <= a[i]){
            index = i;
            break;
        }
    }
    int tsum = 0;
    cout << index << "\n";
    for(int i = 1; i <= index - 1; ++i){
        cout << i << " ";
        tsum += i;
    }
    cout << n - tsum ;
}

int main(){
    solve();
    return 0;
}
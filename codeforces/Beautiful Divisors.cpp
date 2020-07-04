#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int a[100002];

void solve(){
    int n;
}

int main(){
    int n;
    int a[8] = {32640, 8128, 2016, 496, 120, 28, 6, 1};
    cin >> n;
    for(int i = 0; i < 8; ++i){
        if(n%a[i] == 0){
            cout << a[i] << "\n";
            break;
        }
    }
    return 0;
}
//1
// 6
// 28
// 120
// 496
// 2016
// 8128
// 32640
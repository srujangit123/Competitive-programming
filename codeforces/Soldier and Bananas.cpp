#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, n, w, total = 0;
    cin >> k>> n >> w;
    for(int i = 1; i <= w; i++){
        total += i * k;
    }
    if(total >= n){
        cout << total - n;
    }
    else{
        cout << 0;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, max = 0, num = 0;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        num += b - a;
        if(num > max){
            max = num;
        }
        
    }
    cout << max;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >>t;
    int count = 0;
    while(t--){
        int a[3];
        int num = 0;
        for(int i = 0; i < 3; i++){
            cin >> a[i];
            if(a[i] == 1){
                num++;
            }
        }
        if(num >=2 ) count++;
    }
    cout << count ;
    return 0;
}
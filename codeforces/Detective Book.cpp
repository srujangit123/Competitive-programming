#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int days = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int max = a[0];
    for(int i = 0; i < n; ++i){
        if(a[i] > max){
            max = a[i];
        }

        if(max == i + 1){
            days ++;
        }

    }
    cout << days;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0 && a[i] >= a[k - 1]){
            count ++;
        }
        else{
            break;
        }
    }
    cout << count;
    return 0;
}
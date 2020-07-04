#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    // for(int i = 0; i < n; ++i){
    //     cout << a[i] << " ";
    // }
    // cout << "\n";
    int flag = 0;
    for(int i = 0; i <= n-3; ++i){
        // cout << "HEY" << " ";
        if((a[i] + a[i + 1] > a[i + 2]) && (a[i] + a[i + 2] > a[i + 1]) && (a[i + 1] + a[i + 2] > a[i])){
            cout << "YES" << "\n";
            flag = 1;
            break;
        }
    }
    if(flag!=1)
        cout << "NO" << "\n";
    
    return 0;
}
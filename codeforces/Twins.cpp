#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int tsum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        tsum += a[i];
    }
    sort(a.begin(), a.end(), greater<int>()); 
    int lsum = 0, ans;
    for(int i = 0; i < n; i++){
        lsum += a[i];
        if(lsum > (tsum - lsum)){
            ans = i + 1;
            break;
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout << a[i];
    // }
    cout << ans ;
    return 0;
}
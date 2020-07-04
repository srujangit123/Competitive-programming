#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v;
    int ans = 0;
    cin >> n >> v;
    vector <int> k;
    for(int p = 1; p <= n; ++p){
        
        int s;
        cin >> s;
        int amt;
        int flag = 0;
        for(int i = 1; i <= s; ++i){
            cin >> amt;
            if(v > amt && !flag){
                flag = 1;
            } 
        }
        if(flag){
            k.push_back(p);
        }
    }
    ans = k.size();
    cout << ans << "\n";
    sort(k.begin(), k.end());
    for(int i = 0; i < ans; ++i)
        cout << k[i] << " ";
    return 0;

}
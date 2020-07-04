#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, a, b;
    long long total_inital_size = 0;
    vector<int> change(n);
    cin >> n >> m ;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        total_inital_size += (long long)a;
        change[i] = (a - b);

    }
        int ans = 0, p = 0;
        sort(change.begin(), change.end(), greater<int>());
        while(total_inital_size > m && (p <= n - 1)){
            total_inital_size -= (long long)change[p++];
            ans++;
        }
        if(total_inital_size > m)
            cout << "-1" << "\n";
        else
            cout << ans << "\n";
    return 0;
}
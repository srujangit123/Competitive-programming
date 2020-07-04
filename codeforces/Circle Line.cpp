#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    int total = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        total += a[i];
    } 
    int s, t;
    int d1 = 0;
    cin >> s >> t;
    int p = min(s, t);
    int q = max(s, t);
    // cout << a[s] << " " << a[t - 1] << "\n";
    for(int i = p; i <= q - 1; ++i){
        d1 += a[i];
    }
    // cout << d1 << " " << total - d1 << "\n";
    cout << min(d1, total - d1);
    return 0;
}
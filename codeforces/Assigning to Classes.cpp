#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(2 * n + 1);
        for(int i = 1; i <= 2 * n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        cout << a[n + 1] - a[n] << "\n";

    }
    return 0;

}
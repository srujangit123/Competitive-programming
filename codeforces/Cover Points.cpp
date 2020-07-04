#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int x, y;
    int c = 0;
    for(int i = 1; i <= n; ++i){
        cin >> x >> y ;
        if(c < x + y)
            c = x + y;
    }
    cout << c << "\n";
    return 0;
}
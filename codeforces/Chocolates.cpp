#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long int chocolates = a[n - 1];
    int compare = a[n - 1];
    for(int i = n - 2; i >= 0; --i){
        // if(compare == 0){
        //     break;
        // }
        if(a[i] >= compare){
            chocolates += compare - 1;
            compare--;
            if(compare == 0){
                break;
            }
        }
        else{
            chocolates += a[i];
            compare = a[i];
        }
        // cout << chocolates << " ";
    }
    // cout << "\n";
    cout << chocolates << "\n";
    return 0;
}

// 5
// 1 2 1 3 6

// 
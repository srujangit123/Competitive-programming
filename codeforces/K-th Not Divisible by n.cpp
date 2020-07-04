#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        //k is present in 
        int block_num = -1;

        // if(k%2 == 0){
        //     block_num = k/(n - 1);
        // }
        // else {
        //     block_num = (k)/(n - 1) + 1;
        // }
        if(k%(n - 1) == 0){
            block_num = k/(n - 1);
        }
        else {
            block_num = k/(n - 1) + 1;
        }
        int index = k%(n - 1);
        if(index == 0){
            cout << n * block_num - 1 << "\n";
        }
        else
            cout << n * block_num - n + index << "\n"; 
    }
}
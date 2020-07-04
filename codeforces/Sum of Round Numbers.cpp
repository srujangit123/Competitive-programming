#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int expo(int x, int n){
    int result = 1;
    while(n > 0){
        if(n%2 == 1){ // This is when n becomes 1 and when n is odd
            result *= x; // result*x %M if result is large
        }
        x = x*x; // (x * x)%M
        n/=2;           
    }
    return result;

}



int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // if(n/10 == 0){
        //     cout << 1 << "\n";
        //     cout << n << "\n";
        // }
        // else {
        //     int p = n;
        //     vector<int> nums;
        //     while(p > 0){
        //         int temp = p%10;
        //         nums.push_back(temp )
        //     }
        // }
        vector<int> nums;
        int temp = n;
        int power = 0;
        while(temp!=0){
            int num = temp%10;
            // cout << num << " ";
            int pushele = num*expo(10, power);
            if(pushele!=0)
                nums.push_back(pushele);
            temp/=10;
            power++;
        }
        cout << nums.size() << "\n";
        for(int i = 0; i < nums.size(); ++i){
            cout << nums[i] << " ";
        }
        cout << "\n";
    }
}
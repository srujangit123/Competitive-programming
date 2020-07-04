#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n <= 3){
            cout << "-1"; 
        }
        else {
            int temp1 = n, temp2 = n - 1;
            // while(temp2 > 0){
            //     cout << temp2 << " ";
            //     temp2-=2;
            // }
            // while(temp1 > 0){
            //     cout << temp1 << " ";
            //     temp1-=2;
            // }
            int odd = -1, even = -1;;
            if(n%2!=0){
                odd = n;
                even = n - 1;
            }
            else {
                odd = n - 1;
                even = n;
            }
            while(odd > 0){
                cout << odd << " " ;
                odd-=2;
            }
            cout << "4 2 " ;
            int num = 6;
            while(num <= even){
                cout << num << " ";
                num += 2;
            }

        }
        cout << "\n";
    }
    return 0;
}
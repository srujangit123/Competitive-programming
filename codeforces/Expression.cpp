#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int s[6];
    cin >> a >> b >> c;
    s[0] = (a + b + c);
    s[1] = (a * b * c);
    s[2] = (a * b) + c;
    s[3] = a + (b * c);
    s[4] = (a + b) * c;
    s[5] = a * (b + c);
    int max = -1;
    for(int i = 0; i < 6; ++i){
        if(s[i] > max) max = s[i];
    }
    cout << max << "\n" ;
    return 0;
}
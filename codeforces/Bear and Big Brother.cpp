#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    while(b >= a){
        count++;
        a = a * 3;
        b = b * 2;
    }
    cout << count;
	return 0;
}
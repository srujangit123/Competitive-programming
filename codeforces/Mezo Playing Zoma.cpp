#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = 0;
    for(char c : s) {
        if(c == 'L') {
            l--;
        }
        else {
            r++;
        }
    }
    cout << r - l + 1 ;
    return 0;
}
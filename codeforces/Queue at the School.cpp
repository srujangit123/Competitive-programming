#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        for(int i = 0; i < n - 1; ){
            if(s[i] == 'B' && s[i+1]=='G'){
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i = i + 2;
            }
            else{
                i++;
            }
        }
    }
    cout << s;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int numofone = 0, numofzero = 0, result = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            numofzero = 0;
            numofone++;
            if(numofone >= 7){
                result = 1;
                break;
            }
        }
        else{
            numofone = 0;
            numofzero++;
            if(numofzero >= 7){
                result = 1;
                break;
            }
        }
    }
    if(result == 1){
        cout << "YES";
        
    }
    else{
        cout << "NO";
    }
    return 0;
}
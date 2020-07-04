#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string compares = "hello";
    int t = 0, result = 0;
    string p = "";
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == compares[t]){
            t++;
            p += s[i];
            if(p == "hello"){
                result = 1;
                break;
            }
        }
    }
    if(result == 1){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
    return 0;
}
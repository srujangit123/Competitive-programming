#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string r, s;
    int res = 0;
    cin >> r >> s;
    transform(r.begin(), r.end(), r.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < r.length(); i++){
        if(s[i]!=r[i]){
            if((s[i] - r[i]) > 0){
                res = -1;
            }
            else{
                res = 1;
            }
            break;
        }
    }
    cout << res;
    return 0;
}
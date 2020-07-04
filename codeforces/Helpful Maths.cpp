#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int a[4] = {0};
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        a[(s[i])-'0']++;
    }
    string t = "";
    for(int i = 1; i < 4; i++){
        for(int j = 0; j < a[i]; j++){
            t += to_string(i);
            t += "+";
        }
    }
    t.pop_back();
    
    cout << t;
    return 0;
}
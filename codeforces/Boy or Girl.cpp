#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int count = 0;
    vector<int> a(26, 0);
    for(int i = 0; i < s.length(); i++){
        a[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i]!=0){
            count++;
        }
    }
    if(count%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
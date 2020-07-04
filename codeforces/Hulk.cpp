#include <bits/stdc++.h>
#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long int
#define MOD 1000000000+7

using namespace std;
int main(){
    int n;
    cin >> n;
    string s = "hate"; 
    for(int i = 2; i <= n; ++i){
        if(i%2 == 0){
            s +=" that I love";
        }
        else{
            s += " that I hate";
        }
    }
    s += " it";
    s.insert(0, "I ");
    cout << s;
    return 0;
}
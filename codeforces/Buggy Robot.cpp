#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int a[4];
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; ++i){
        switch(s[i]){
            case 'L': a[0]++; break;
            case 'R': a[1]++; break;
            case 'U': a[2]++; break;
            case 'D': a[3]++; break; 
        }
    }
    cout << min(a[0], a[1])*2 + min(a[2], a[3]) * 2;
}

int main(){
    solve();
    return 0;
}
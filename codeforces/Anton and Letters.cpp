#include <bits/stdc++.h>
#define fo(i, n) for(int i = 0; i < n; ++i)
#define ll long long int
#define fok(i, k, n) for(int i = k; i < n; ++i)
#define MOD 1000000000+7
#define all(X) X.begin(), X.end()
#define pb push_back
#define present(a, x) (a.find(x)!=a.end())

using namespace std;
int main(){
    string s;
    getline(cin , s);
    vector<int> a(26, 0);
    for(int i = 0; i < s.length(); ++i){
        if(s[i]>='a' && s[i] <= 'z'){
            a[s[i] - 'a']++;
        }
    }
    int count = 0;
    fo(i, 26){
        if(a[i]!=0){
            count ++;
        }
    }
    cout << count ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string a = "";
        if(s.length()> 10){
            a += (s[0] + to_string(s.length() - 2) + s[s.length() - 1]);
            cout << a << "\n";
        }
        else{
            cout << s << "\n";
        }

    }
    return 0;
}

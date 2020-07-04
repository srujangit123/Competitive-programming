#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int count = 0 ;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            count++;
        }
    }
    if((count == s.length()) || (islower(s[0]) && count == s.length()-1)){
            for (int i=0; i<s.length(); i++) 
            { 
                if (s[i]>='a' && s[i]<='z') 
                //Convert lowercase to uppercase 
                    s[i] = s[i] - 32; 
                else if(s[i]>='A' && s[i]<='Z') 
                //Convert uppercase to lowercase 
                    s[i] = s[i] + 32; 
            } 
        } 
        
    cout << s;
	return 0;
}
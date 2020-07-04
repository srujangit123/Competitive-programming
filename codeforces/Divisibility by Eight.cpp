#include <bits/stdc++.h>
using namespace std;


void solve(){
    int index = 99;
    // cin>> n;
    string s;
    cin >> s;
    vector<int> digits;
    for(int i = 0; i < (int)s.length(); ++i){
        digits.push_back(s[i] - '0');
        if(digits[i] == 0 || digits[i] == 8){
            cout << "YES\n" << digits[i];
            return;
        }
    }
    bool six = false, four = false, two = false;
    int start = 0;
    int end = digits.size() - 1;
    // for(int i = start; i < 100; ++i) cout << digits[i];
    for(int i = end; i >= start; --i){
        if(digits[i]%2 == 0){
            if((digits[i] == 2 || digits[i] == 6) && four){
                cout << "YES\n" << digits[i] << "4";
                // cout << "gjahg";
                return;
            }
            if(digits[i] == 6 && !six){
                six = true;
                continue;
            }
            if(digits[i] == 4 && !four){
                four = true;
                continue;
            }
            if(digits[i] == 2 && !two){
                two = true;
                continue;
            }
        }
        else {
            if((digits[i] == 1 || digits[i] == 5 || digits[i] == 9) && six){
                cout << "YES\n" << digits[i] << "6";
                // cout << "boo";
                return;
            }
            if((digits[i] == 3 || digits[i] == 7) && two){
                cout << "YES\n" << digits[i] << "2";
                // cout << "i am gere";
                return;
            }
        }
    }
    // cout << "hey";
    six = four = two = false;
    bool tsix = false, tfour = false, ttwo = false;
    int vsix = 0, vfour = 0, vtwo = 0;
    for(int i = end; i >= start; --i){
        if(digits[i]%2 == 0){
            if((digits[i] == 4) && four){
                tfour = true;
                vfour = digits[i] * 10 + 4;
                continue;
            }
            if(digits[i] == 6 && !six){
                six = true;
                continue;
            }
            if(digits[i] == 4 && !four){
                four = true;
                continue;
            }
            if(digits[i] == 2 && !two){
                two = true;
                continue;
            }
        }
        else {
            if(tsix || ttwo || tfour){
                cout << "YES\n" << digits[i];
                if(tsix){
                    cout << vsix;
                    return;
                }
                if(ttwo){
                    cout << vtwo;
                    return;
                }
                if(tfour){
                    cout << vfour;
                    return;
                }
            }
            if((digits[i] == 7 || digits[i] == 3) && six){
                tsix = true;
                vsix = digits[i] * 10 + 6;
                continue;
            }
            if((digits[i] == 1 || digits[i] == 5 || digits[i] == 9) && two){
                ttwo = true;
                vtwo = digits[i] * 10 + 2;
                continue;
            }
        }
    }
    cout << "NO";

}


int main(){

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
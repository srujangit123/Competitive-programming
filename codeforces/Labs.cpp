#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector < vector<int> > a(n, vector<int> (n, 0));
    bool toggle = true;
    //if true start from left
    int cnt = 1;
    for(int i = 0; i < n; ++i){
        if(toggle){
            toggle = !toggle;
            for(int j = 0; j < n; ++j){
                a[i][j] = cnt;
                cnt++;
            }
        }
        else {
            toggle = !toggle;
            for(int j = n - 1; j >= 0; --j){
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int column = 0; column < n; ++column){
        for(int row = 0; row < n; ++row){
            cout << a[row][column] << " ";
        }
        cout << "\n";
    }
}

int main(){
    solve();
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime[1000001]; 

void SieveOfEratosthenes(int n){  
    memset(prime, true, sizeof(prime));   
    for (int p=2; p*p<=n; p++){  
        if (prime[p] == true) { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
    prime[1] = false;
} 


void solve(){
    // cout << prime[1] << " ";
    int n, m;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int> (m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int mincnt = INT32_MAX;
    for(int i = 0; i < n; ++i){
        int tempcnt = 0;
        for(int j = 0; j < m; ++j){
            int inc = 0;
            while(1){
                if(prime[a[i][j] + inc]){
                    break;
                }
                else {
                    inc ++;
                    tempcnt++;
                }
            }
        }
        mincnt = min(mincnt, tempcnt);
    }
    // cout << mincnt << "\n";
    for(int i = 0; i < m; ++i){
        int tempcnt = 0;
        for(int j = 0; j < n; ++j){
            int inc = 0;
            while(1){
                if(prime[a[j][i] + inc]){
                    break;
                }
                else {
                    inc ++;
                    tempcnt++;
                }
            }
        }
        mincnt = min(mincnt, tempcnt);
    }
    cout << mincnt << "\n";
}

int main(){
    SieveOfEratosthenes(1000000);
    solve();
    return 0;
}
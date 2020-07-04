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
    int n, k;
    cin >> n >> k;
    int count = 0;
    // Total minutes = 240 
    int minutestakentosolve = 0;
    for(int i = 1; i <= n; ++i){
        if((minutestakentosolve + 5* i) + k <= 240){
            minutestakentosolve += 5 * i;
            count ++;
        }
    }
    cout << count;
    return 0;
}
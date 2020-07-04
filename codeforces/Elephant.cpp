#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int steps = 0;
    for(int i = 5; i >= 1; i--){
        steps += n/i;
        n = n%i;
    }
    cout<<steps;
    return 0;
}
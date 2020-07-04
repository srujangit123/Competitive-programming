#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int nooftaxis = 1;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    while(i!=j){
        if(a[i] + a[j] <= 4){
            a[j] += a[i];
            i++;
        }
        else{
            j--;
            nooftaxis++;
        }
    }
    cout << nooftaxis;
    return 0;
}
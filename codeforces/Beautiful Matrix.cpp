#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[5][5];
    int inrindex, incindex;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                inrindex = i;
                incindex = j;
                break;
            }
        }
    }
    int rmoves = abs(2 - inrindex);
    int cmoves = abs(incindex - 2);
    cout << rmoves + cmoves;
    return 0;
}
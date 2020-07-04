#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n ;
    vector <int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i){
        vector<bool> visited(n + 1, false);
        visited[i] = true;
        int j = i;
        int index = i;
        while(1){
            j = a[index];
            if(visited[j]){
                cout << j << " ";
                break;
            }
            else {
                visited[j] = true;
            }
            index = j;
        }

    }
    return 0;

}
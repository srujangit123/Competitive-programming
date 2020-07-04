#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int ibs(int x, int a[], int n){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(x < a[mid]){
            right = mid - 1;
        } 
        else if(x > a[mid]){
            left = mid + 1;
        }
        else{
            if(a[mid + 1] == x)
                return mid + 1;
            return mid;
        }
    }
    if(left == n){
        return n - 1;
    }
    if(right == -1){
        return -1;
    }
    if(a[left] > x){
        return right;
    } 
    else {
        return left;
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a, a + n);
    for(int i = 0; i < m; ++i){
        cout << upper_bound(a, a + n, b[i]) - a << "\n";
    }
}

int main(){
    solve();
    return 0;
}
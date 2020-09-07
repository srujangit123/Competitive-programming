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
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int p1 = (x1 > x2)? x1 : x2;
    int max = (p1 > x3)? p1: x3;
    int p2 = (x1 < x2)? x1 : x2;
    int min = (p2 < x3)? p2: x3;

    int x = (max + min)/2;
    cout << max - min;
    return 0;
}
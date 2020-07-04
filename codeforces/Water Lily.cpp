#include <bits/stdc++.h>
using namespace std;

int main(){
    long long h, l;
    cin >> h >> l;
    float ans = ((float)(l * l) - (h * h))/(2 * h);
    printf("%f", ans);
    return 0;
}
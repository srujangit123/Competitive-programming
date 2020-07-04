#include <iostream>
using namespace std;
int ans[100005];
int main()
{
    int n, cnt=0;
    cin >> n;
    for (int i = 2 ;i <= n; ++i)
    {
        if (!ans[i])
        {
            ans[i] = ++cnt;
            for (int j = i; j <= n; j+=i)
            ans[j] = ans[i];
        }
        cout << ans[i] << " ";
    }
}
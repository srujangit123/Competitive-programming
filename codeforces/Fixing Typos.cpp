#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    char a, b, c, d;
	while (cin >> a)
        if(!((a == b && b == c)|| (a == b && c == d)))
            cout << a, d = c, c = b, b = a;
    return 0;
}
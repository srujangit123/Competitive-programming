#include <iostream>
using namespace std;


int main()
{
	int m, s, i, k;
	cin >> m >> s;

	if(s < 1 && m > 1 || s > m*9)
	    cout << "-1 -1\n";

	else{
        k = s;
        for(i = m - 1; i >= 0; --i){
            int j = max(0, k - 9*i);
            if(j == 0 && i == m - 1 && k) 
                j = 1;

            cout << j;
            k -= j;
        }
        cout << ' ';
        k = s;
        for(i = m - 1; i >= 0; --i){
            int j = min(9, k);
            cout << j;
            k -= j;
        }
	}
}

/**
 * 15 s = 15; k = 15; m = 2;
 * k = 15
 * j = 15 - 9 = 6 j = 6 
*/
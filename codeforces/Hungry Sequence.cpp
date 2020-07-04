#include <iostream>
using namespace std;
 
int main()
{
	long n;
	cin >> n;
	for(long i = n; i <= 2 * n - 1; i++)
		cout << i << ' ';
	return 0;
}

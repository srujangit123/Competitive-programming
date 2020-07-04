#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int test = 1; test <= t; test++) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int res = 0;

		for (int i = 0; i < n;) {
			int j = i + 1;

			for (; j < n && s[j] != '1'; j++);

			int left = s[i] == '1' ? k : 0;
			int right = j < n && s[j] == '1' ? k : 0;
			int len = j - i;

			if (left == k) {
				len--;
			}

			len -= left + right;

			if (len > 0) {
				res += (len + k) / (k + 1);
			}

			i = j;
		}

		cout << res << endl;
	}

	return 0;
}
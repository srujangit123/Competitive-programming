#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m, l, r, k;
    cin >> m;
    for(int i = 1; i <= m; ++i) {
        cin >> l >> r >> k;
        --l; --r;
        string ns(r - l + 1, ' ');
        // s.resize(r + 1);
        int shift = k%(r - l + 1);
        for(int j = l; j <= r; ++j) {
            if(j + shift <= r) ns[(j + shift) - l] = s[j];
            else               ns[l + shift - (r - j) - 1 - l] = s[j];
        }
        // cout << "hey " << ns << "\n";
        s.replace(s.begin() + l, s.begin() + r + 1, ns);
    }
    cout << s << "\n";
    return 0;
}

// string length = r - l + 1;
// effective shift = k%(r - l + 1)
// so each position is shifted this many times to the right.
// so we get the character at ith position by going this much to the left.
// s[i] = s[i - shift] -> if i-shift >= l....
// if(i - shift < l || i - shift < 0) then i - l is the max left reachable so for this (i - shift) - (i - l) from the 
#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int q;
    cin >> q;
    forn(qq, q) {
        string s;
        cin >> s;
        int n;
        cin >> n;
        vector<int> b(n);
        forn(i, n)
            cin >> b[i];
        vector<vector<int>> groups;
        while (true) {
            vector<int> pos;
            forn(i, n)
                if (b[i] == 0)
                    pos.push_back(i);
            if (pos.empty())
                break;
            groups.push_back(pos);
            forn(i, n)
                if (b[i] == 0)
                    b[i] = INT_MAX;
                else
                    for (int pp: pos)
                        b[i] -= abs(i - pp);
        }
        map<char, int> cnts;
        forn(i, s.size())
            cnts[s[i]]++;
        auto j = cnts.rbegin();
        string t(n, '?');
        for (auto g: groups) {
            while (j->second < g.size())
                j++;
            for (int pp: g)
                t[pp] = j->first;
            j++;
        }
        cout << t << endl;
    }
}
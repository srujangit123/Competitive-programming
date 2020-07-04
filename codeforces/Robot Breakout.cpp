#include <algorithm>
#include <iostream>

using namespace std;

const int MAXC = 1e5;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        int mnx = -MAXC, mxx = MAXC;
        int mny = -MAXC, mxy = MAXC;
        while (n--) {
            int x, y, f1, f2, f3, f4;
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;
            if (!f1) mnx = max(mnx, x);
            if (!f2) mxy = min(mxy, y);
            if (!f3) mxx = min(mxx, x);
            if (!f4) mny = max(mny, y);
        }
        if (mnx <= mxx && mny <= mxy)
            cout << "1 " << mxx << " " << mxy << "\n";
        else
            cout << "0\n";
    }

    return 0;
}
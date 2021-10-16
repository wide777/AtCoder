#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int xM = -101, ym = 101;
    REP(i, n) {
        int a;
        cin >> a;
        xM = max(xM, a);
    }
    REP(i, m) {
        int a;
        cin >> a;
        ym = min(ym, a);
    }

    for(int z = x + 1; z < y; ++z) {
        if(xM < z && z <= ym) {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
    return 0;
}
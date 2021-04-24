#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m, l, r, f = 0, c = 100001;
    cin >> n >> m;
    REP(i, m) {
        cin >> l >> r;
        f = max(f, l);
        c = min(c, r);
    }

    cout << max(0, c - f + 1) << endl;
}
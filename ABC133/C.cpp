#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int l, r;
    cin >> l >> r;

    vector<vector<int> > mod(2019, vector<int>(2019));
    REP(i, 2019) REP(j, 2019) mod[i][j] = (i * j) % 2019;

    int m = 2000000001, M = -1;
    for(int i = 0; i < 2019 && l + i <= r; i++) {
        m = min(m, (l + i) % 2019);
        M = max(m, (l + i) % 2019);
    }

    int res = 2019;
    for(int i = m; i < M; i++) {
        for(int j = m + 1; j <= M; j++) {
            res = min(res, mod[i][j]);
        }
    }

    cout << res << endl;
}
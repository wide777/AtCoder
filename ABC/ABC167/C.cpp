#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int> > a(n, vector<int>(m));
    REP(i, n) {
        cin >> c[i];
        REP(j, m) cin >> a[i][j];
    }

    int res = 1000000000;
    for(int bit = 0; bit < (1 << n); bit++) {
        int money = 0;
        vector<int> und(m, 0);
        REP(i, n) {
            if(bit & (1 << i)) {
                money += c[i];
                REP(j, m) und[j] += a[i][j];
            }
        }

        if(all_of(und.begin(), und.end(), [x](int u) { return u >= x; })) {
            res = min(res, money);
        }
    }

    if(res != 1000000000) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}
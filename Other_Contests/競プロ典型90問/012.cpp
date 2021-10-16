#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Square = vector<vector<bool> >;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int h, w, q;

void q1(dsu &d, Square &s) {
    int r, c;
    cin >> r >> c;
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    for(int i = 0; i < 4; i++) {
        int x = r + dx[i], y = c + dy[i];
        if(!(0 < x && x <= h) || !(0 < y && y <= w)) continue;
        if(!s[x][y]) continue;
        int hash1 = (r - 1) * w + (c - 1);
        int hash2 = (x - 1) * w + (y - 1);
        d.merge(hash1, hash2);
    }
    s[r][c] = true;
}

void q2(dsu &d, Square &s) {
    int ra, ca, rb, cb;
    cin >> ra >> ca >> rb >> cb;
    int hash1 = (ra - 1) * w + (ca - 1);
    int hash2 = (rb - 1) * w + (cb - 1);
    if(s[ra][ca] && s[rb][cb] && d.same(hash1, hash2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    cin >> h >> w >> q;
    dsu d(h * w);
    Square s(h + 1, vector<bool>(w + 1, false));
    REP(i, q) {
        int t;
        cin >> t;
        if(t == 1) {
            q1(d, s);
        } else if(t == 2) {
            q2(d, s);
        }
    }
}
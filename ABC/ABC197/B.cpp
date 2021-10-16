#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll h, w, x, y;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    vector<vector<char>> s(h, vector<char>(w));
    REP(i, h) REP(j, w) cin >> s[i][j];

    ll res = 0;
    for(int i = x - 1; 0 <= i; i--) {
        if(s[i][y] == '#') {
            break;
        } else {
            res++;
        }
    }
    for(int i = x + 1; i < h; i++) {
        if(s[i][y] == '#') {
            break;
        } else {
            res++;
        }
    }
    for(int j = y - 1; 0 <= j; j--) {
        if(s[x][j] == '#') {
            break;
        } else {
            res++;
        }
    }
    for(int j = y + 1; j < w; j++) {
        if(s[x][j] == '#') {
            break;
        } else {
            res++;
        }
    }
    cout << res + 1 << endl;
}
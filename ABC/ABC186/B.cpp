#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));

    int minval = INF;
    rep(i, h) rep(j, w) {
        cin >> a[i][j];
        minval = min(minval, a[i][j]);
    }

    int res = 0;
    rep(i, h) rep(j, w) {
        if(minval < a[i][j]) res += a[i][j] - minval;
    }

    cout << res << endl;
}
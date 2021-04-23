#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    gy = -gy;
    double grad = (gy - sy) / (gx - sx);
    double b = sy - grad * sx;
    double ans = -b / grad;
    cout << fixed << setprecision(7) << ans << endl;
}
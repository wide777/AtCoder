#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w = w * 1000;

    int mincnt = INF, maxcnt = 0;
    for(int i = 1; i <= w; i++) {
        if(a * i <= w && w <= b * i) {
            mincnt = min(mincnt, i);
            maxcnt = max(maxcnt, i);
        }
    }

    if(mincnt == INF) {
        cout << "UNSATISFIABLE" << endl;
    } else {
        cout << mincnt << " " << maxcnt << endl;
    }
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int n, m, t, rt = 0, a, b;
    cin >> n >> m >> t;

    int rb = n;

    REP(i, m) {
        cin >> a >> b;
        rb -= a - rt;
        if(rb <= 0) {
            cout << "No" << endl;
            return 0;
        }
        rb += b - a;
        if(rb >= n) rb = n;
        rt = b;
    }

    rb -= t - rt;
    if(rb <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
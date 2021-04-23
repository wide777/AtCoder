#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int n;
    cin >> n;

    ll u = 1, a = 1, b = 1;
    REP(i, n) {
        u = u * 10 % MOD;
        a = a * 9 % MOD;
        b = b * 8 % MOD;
    }

    ll res = u - a * 2 + b;
    res = res % MOD;
    if(res < 0) res = (res + MOD) % MOD;

    cout << res << endl;
}
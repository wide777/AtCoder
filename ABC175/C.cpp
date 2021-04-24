#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll x, k, d;
    cin >> x >> k >> d;

    x = abs(x);
    ll straight = min(k, x / d);
    k -= straight;
    x -= straight * d;

    if(k % 2 == 1) {
        cout << abs(x - d) << endl;
    } else {
        cout << x << endl;
    }
}
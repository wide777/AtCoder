#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll n, d;
    cin >> n >> d;
    ll x, y;
    ll ans = 0;
    REP(i, n) {
        cin >> x >> y;
        if(sqrt(x * x + y * y) <= d) ans++;
    }

    cout << ans << endl;
}
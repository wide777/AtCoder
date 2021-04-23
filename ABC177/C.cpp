#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    REP(i, n) cin >> a[i];
    b[0] = a[0];
    for(int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += a[i] * ((b[n - 1] - b[i]) % MOD) % MOD;
    }

    cout << ans % MOD << endl;
}
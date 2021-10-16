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
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    ll res = 0;
    for(ll l = 0; l < n; l++) {
        ll x = a[l];
        for(ll r = l; r < n; r++) {
            x = min(x, a[r]);
            res = max(res, x * (r - l + 1));
        }
    }

    cout << res << endl;
}
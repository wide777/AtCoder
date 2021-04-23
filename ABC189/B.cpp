#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n), p(n);
    REP(i, n) cin >> v[i] >> p[i];

    ll alco = 0;
    for(ll i = 0; i < n; i++) {
        alco += v[i] * p[i];
        if(alco > x * 100) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
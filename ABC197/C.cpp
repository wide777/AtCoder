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

    ll res = INF;
    for(int bit = 0; bit < (1 << n - 1); bit++) {
        bitset<20> bs(bit);
        ll ored = 0, xored = 0;
        for(int i = 0; i <= n; i++) {
            if(i < n) ored |= a[i];
            if(i == n || bs[i]) {
                xored ^= ored;
                ored = 0;
            }
        }

        res = min(res, xored);
    }

    cout << res << endl;
}
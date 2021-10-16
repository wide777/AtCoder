#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    ll n, m, k;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    cin >> k;
    vector<ll> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];

    ll ans = 0;
    for(int bit = 0; bit < (1 << k); bit++) {
        vector<bool> ball(n, false);
        for(int i = 0; i < k; i++) {
            if(bit & (1 << i))
                ball[c[i] - 1] = true;
            else
                ball[d[i] - 1] = true;
        }
        ll cnt = 0;
        for(int i = 0; i < m; i++) {
            if(ball[a[i] - 1] && ball[b[i] - 1]) cnt++;
        }
        ans = (cnt > ans) ? cnt : ans;
    }

    cout << ans << endl;
}
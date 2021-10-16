#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

ll nearly_abs(vector<ll> &x, vector<ll> &y) {
    ll ans = 1e15 + 1;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int ix = 0, iy = 0;
    while(ix < (int)x.size()) {
        ll d = abs(x[ix] - y[iy]);
        while((iy < (int)y.size() - 1) && (abs(x[ix] - y[iy + 1]) <= d)) {
            iy++;
            d = abs(x[ix] - y[iy]);
        }
        ans = min(ans, d);
        ix++;
    }
    return ans;
}

void solve(vector<ll> &x, vector<ll> &y, vector<ll> &z) {
    if(y.size() % 2 == 0) {
        cout << 0 << endl;
    } else {
        ll ans = 1e15 + 1;
        ans = min(ans, nearly_abs(y, z));
        ans = min(ans, nearly_abs(x, y) + nearly_abs(x, z));
        cout << ans << endl;
    }
}

int main() {
    ll N;
    cin >> N;
    vector<ll> r, g, b;
    REP(i, 2 * N) {
        ll a;
        char c;
        cin >> a >> c;
        if(c == 'R') {
            r.push_back(a);
        } else if(c == 'G') {
            g.push_back(a);
        } else {
            b.push_back(a);
        }
    }

    if(r.size() % 2 == 0) {
        solve(r, g, b);
    } else if(g.size() % 2 == 0) {
        solve(g, r, b);
    } else if(b.size() % 2 == 0) {
        solve(b, r, g);
    }
}
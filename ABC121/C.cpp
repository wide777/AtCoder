#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > vp(n);
    REP(i, n) cin >> vp[i].first >> vp[i].second;
    sort(vp.begin(), vp.end());

    ll res = 0;
    for(auto [a, b] : vp) {
        if(b < m) {
            res += a * b;
            m -= b;
        } else {
            res += a * m;
            break;
        }
    }
    cout << res << endl;
}
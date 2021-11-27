#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N, W;
    cin >> N >> W;
    vector<pair<ll, ll>> P(N);
    REP(i, N) {
        cin >> P[i].first >> P[i].second;
    }
    sort(P.begin(), P.end(), greater<pair<ll, ll>>());

    ll ans = 0;
    REP(i, N) {
        ans += P[i].first * min(W, P[i].second);
        W -= P[i].second;
        if(W <= 0) break;
    }
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const ll INF = (1LL << 60);

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<ll> > d(N, vector<ll>(N, INF));
    for(int i = 0; i < N; i++) d[i][i] = 0;
    REP(i, M) {
        int A, B, C;
        cin >> A >> B >> C;
        d[A - 1][B - 1] = C;
    }

    ll ans = 0;
    REP(k, N) {
        vector<vector<ll> > nxt(N, vector<ll>(N, 0));
        REP(i, N) REP(j, N) {
            nxt[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            if(nxt[i][j] != INF) ans += nxt[i][j];
        }
        d = nxt;
    }
    cout << ans << endl;
}
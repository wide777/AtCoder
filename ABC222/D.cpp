#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    int a[N], b[N];
    REP(i, N) cin >> a[i];
    REP(i, N) cin >> b[i];

    mint dp[N + 1][3001] = {0};
    dp[0][0] = 1;
    for(int i = 0; i < N; ++i) {
        REP(j, 3000) dp[i][j + 1] += dp[i][j];
        for(int j = a[i]; j <= b[i]; ++j) dp[i + 1][j] = dp[i][j];
    }

    mint ans = 0;
    REP(i, 3001) ans += dp[N][i];
    cout << ans.val() << endl;

    return 0;
}
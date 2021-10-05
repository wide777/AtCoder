#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    const int MOD = 998244353;
    ll N;
    cin >> N;
    ll A[N];
    REP(i, N) cin >> A[i];

    ll dp[N][10] = {0};
    dp[0][A[0]] = 1;
    for(int i = 1; i < N; ++i) {
        for(int j = 0; j < 10; ++j) {
            if(dp[i - 1][j] > 0) {
                ll F = (j + A[i]) % 10;
                ll G = (j * A[i]) % 10;
                dp[i][F] = (dp[i][F] + dp[i - 1][j]) % MOD;
                dp[i][G] = (dp[i][G] + dp[i - 1][j]) % MOD;
            }
        }
    }

    REP(i, 10) cout << dp[N - 1][i] << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

const int MOD = 1e9 + 7;

int main() {
    ll N, L;
    cin >> N >> L;

    vector<ll> dp(N + 1);
    dp[0] = 1;
    for(int i = 1; i <= N; i++) {
        if(i < L) {
            dp[i] = dp[i - 1];
        } else {
            dp[i] = (dp[i - 1] + dp[i - L]) % MOD;
        }
    }
    cout << dp[N] << endl;
}
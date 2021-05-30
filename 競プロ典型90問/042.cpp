#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;

int main() {
    ll k;
    cin >> k;

    if(k % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(k + 1);
    dp[0] = 1;
    for(int i = 1; i <= k; i++) {
        int B = min(i, 9);
        for(int j = 1; j <= B; j++) {
            dp[i] += dp[i - j] % MOD;
        }
    }
    cout << dp[k] % MOD << endl;
}
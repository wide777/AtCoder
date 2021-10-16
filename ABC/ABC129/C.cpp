#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MOD = 1000000007;

int main() {
    int n, m;
    cin >> n >> m;
    int a;
    vector<bool> issafe(n + 1, true);
    REP(i, m) {
        cin >> a;
        issafe[a] = false;
    }

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    if(issafe[1] == true) dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(issafe[i - 1]) dp[i] += dp[i - 1];
        if(issafe[i - 2]) dp[i] += dp[i - 2];
        dp[i] %= MOD;
    }
    cout << dp[n] << endl;
}
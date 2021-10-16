#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MOD = 1000000007;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<vector<int> > dp(n + 1, vector<int>(8, 0));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 8; j++) {
            if(s[i] == 'a' && j == 0) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 't' && j == 1) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 'c' && j == 2) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 'o' && j == 3) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 'd' && j == 4) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 'e' && j == 5) dp[i + 1][j + 1] += dp[i][j];
            if(s[i] == 'r' && j == 6) dp[i + 1][j + 1] += dp[i][j];
            dp[i + 1][j] += dp[i][j];
        }
        for(int j = 0; j < 8; j++) dp[i + 1][j] %= MOD;
    }

    cout << dp[n][7] << endl;
}
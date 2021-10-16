#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    const int MOD = 1e9 + 7;
    string S;
    cin >> S;

    int n = S.size();

    vector<vector<int> > dp(n + 1, vector<int>(9, 0));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 9; j++) {
            if(S[i] == 'c' && j == 0) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'h' && j == 1) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'o' && j == 2) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'k' && j == 3) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'u' && j == 4) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'd' && j == 5) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'a' && j == 6) dp[i + 1][j + 1] += dp[i][j];
            if(S[i] == 'i' && j == 7) dp[i + 1][j + 1] += dp[i][j];
            dp[i + 1][j] += dp[i][j];
        }
        for(int j = 0; j < 9; j++) dp[i + 1][j] %= MOD;
    }

    cout << dp[n][8] << endl;
}
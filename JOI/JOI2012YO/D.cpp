#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MOD = 1e4;
    int N, K;
    cin >> N >> K;

    int decided[N] = {0};
    for(int i = 0; i < K; ++i) {
        int A, B;
        cin >> A >> B;
        decided[A - 1] = B;
    }

    int dp[N + 1][4][4] = {0};
    dp[0][0][0] = 1;
    for(int i = 0; i < N; ++i) {
        for(int a = 0; a < 4; ++a) {
            for(int b = 0; b < 4; ++b) {
                for(int c = 1; c < 4; ++c) {
                    if(decided[i] && decided[i] != c) continue;
                    if(!(a == b && b == c)) {
                        dp[i + 1][c][a] += dp[i][a][b];
                        dp[i + 1][c][a] %= MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for(int i = 1; i < 4; ++i) {
        for(int j = 1; j < 4; ++j) {
            ans += dp[N][i][j];
            ans %= MOD;
        }
    }
    cout << ans << endl;

    return 0;
}
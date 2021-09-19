#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

const int INF = 1 << 29;
int N, X, Y;
int dp[310][310][310];

int main() {
    // 入力
    cin >> N >> X >> Y;

    // dpテーブルの初期化
    REP(i, 310) REP(j, 310) REP(k, 310) dp[i][j][k] = INF;
    dp[0][0][0] = 0;

    // dpテーブルの更新
    for(int i = 1; i <= N; i++) {
        int A, B;
        cin >> A >> B;
        REP(j, X + 1) REP(k, Y + 1) {
            dp[i][min(j + A, X)][min(k + B, Y)] =
                min(dp[i][min(j + A, X)][min(k + B, Y)], dp[i - 1][j][k] + 1);
            dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);
        }
    }

    // 解の出力
    if(dp[N][X][Y] != INF) {
        cout << dp[N][X][Y] << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
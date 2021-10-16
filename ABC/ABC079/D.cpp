#include <iostream>
using namespace std;

int dp[10][10];
void warshall_floyd(int n) {
    for(int k = 0; k < n; ++k) {
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
}

int main() {
    int H, W;
    cin >> H >> W;
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) cin >> dp[i][j];
    }
    warshall_floyd(10);

    int ans = 0;
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            int A;
            cin >> A;
            if(A == -1) continue;
            ans += dp[A][1];
        }
    }
    cout << ans << endl;

    return 0;
}
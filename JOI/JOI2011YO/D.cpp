#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int left[N - 1];
    for(int i = 0; i < N - 1; ++i) cin >> left[i];
    int right;
    cin >> right;

    const int M = 20;
    vector<vector<long long>> dp(N, vector<long long>(M + 1));
    dp[0][0] = 1;
    for(int i = 0; i < N - 1; ++i) {
        for(int j = 0; j <= M; ++j) {
            long long plus = 0, minus = 0;
            if(0 <= j - left[i]) plus = dp[i][j - left[i]];
            if(i != 0 && j + left[i] <= M) minus = dp[i][j + left[i]];
            dp[i + 1][j] = plus + minus;
        }
    }
    cout << dp[N - 1][right] << endl;

    return 0;
}
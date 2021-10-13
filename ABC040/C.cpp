#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(auto &x : a) cin >> x;

    int dp[N] = {0};
    dp[1] = abs(a[1] - a[0]);
    for(int i = 2; i < N; ++i) {
        dp[i] = min(dp[i - 1] + abs(a[i - 1] - a[i]),
                    dp[i - 2] + abs(a[i - 2] - a[i]));
    }
    cout << dp[N - 1] << endl;

    return 0;
}
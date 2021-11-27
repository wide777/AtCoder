#include <iostream>
using namespace std;

int main() {
    const int MOD = 1e5;
    int n, m;
    cin >> n >> m;

    int cusum[n] = {0};
    for(int i = 0; i < n - 1; ++i) {
        int s;
        cin >> s;
        cusum[i + 1] = cusum[i] + s;
    }

    int from = 0;
    int ans = 0;
    for(int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        ans += abs(cusum[from + a] - cusum[from]) % MOD;
        ans %= MOD;
        from += a;
    }
    cout << ans << endl;

    return 0;
}
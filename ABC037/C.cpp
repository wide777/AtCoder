#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int a[N];
    for(auto &x : a) cin >> x;

    long long csum[N + 1] = {0};
    for(int i = 0; i < N; ++i) csum[i + 1] += csum[i] + a[i];

    long long ans = 0;
    for(int i = 0; i < N - K + 1; ++i) {
        ans += csum[i + K] - csum[i];
    }
    cout << ans << endl;

    return 0;
}
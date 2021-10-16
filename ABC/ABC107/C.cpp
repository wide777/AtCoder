#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int x[N];
    for(int i = 0; i < N; ++i) cin >> x[i];

    long long ans = 1LL << 60;
    for(int i = 0; i + K - 1 < N; ++i) {
        long long left = x[i], right = x[i + K - 1];
        ans = min(ans, min(abs(left), abs(right)) + right - left);
    }
    cout << ans << endl;

    return 0;
}
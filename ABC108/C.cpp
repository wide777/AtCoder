#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    long long v[K] = {0};
    for(int i = 1; i <= N; ++i) ++v[i % K];

    long long ans = 0;
    for(int i = 0; i < K; ++i) {
        int a, b, c;
        a = i;
        b = (K - a) % K;
        c = (K - b) % K;
        if((a + c) % K == 0) ans += v[a] * v[b] * v[c];
    }
    cout << ans << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    long long ans = K;
    for(int i = 1; i < N; ++i) {
        ans *= (K - 1);
    }
    cout << ans << endl;

    return 0;
}
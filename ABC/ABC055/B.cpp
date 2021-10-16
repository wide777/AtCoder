#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long ans = 1;
    const int MOD = 1e9 + 7;
    for(int i = 1; i <= N; ++i) ans = (ans * i) % MOD;
    cout << ans << endl;

    return 0;
}
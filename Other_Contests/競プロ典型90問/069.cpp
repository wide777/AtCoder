#include <iostream>
using namespace std;

// xのn乗をmで割った余りをO(log n)で計算
long long mod_pow(long long x, long long n, long long m) {
    if(n == 0) return 1;
    if(n == 1) return x % m;
    if(n % 2 == 1) return (x * mod_pow(x, n - 1, m)) % m;
    long long ret = mod_pow(x, n / 2, m);
    return (ret * ret) % m;
}

int main() {
    // 入力
    const int MOD = 1000000007;
    long long N, K;
    cin >> N >> K;

    // 処理
    if(K == 1) {
        cout << ((N == 1) ? 1 : 0) << endl;
    } else if(N == 1) {
        cout << K << endl;
    } else if(N == 2) {
        cout << K * (K - 1) % MOD << endl;
    } else {
        cout << K * (K - 1) % MOD * mod_pow(K - 2, N - 2, MOD) % MOD << endl;
    }
}
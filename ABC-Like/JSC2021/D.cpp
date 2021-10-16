#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MOD = 1000000007;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << (p - 1) * modpow((p - 2), (n - 1), MOD) % MOD << endl;
}
#include <atcoder/modint>
#include <iostream>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;
const int MOD = 1000000007;

int main() {
    int W, H;
    cin >> W >> H;

    const int MAX = H + W - 2;
    mint fac[MAX + 1];
    fac[0] = fac[1] = 1;
    for(int i = 2; i <= MAX; ++i) {
        fac[i] = fac[i - 1] * i;
    }
    mint fWH = fac[H + W - 2];
    mint finvW = fac[W - 1].pow(MOD - 2);
    mint finvH = fac[H - 1].pow(MOD - 2);
    cout << (fWH * finvW * finvH).val() << endl;

    return 0;
}
#include <atcoder/modint>
#include <iostream>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;

int N, M;
mint ans = 1;

void mul_factorial_to_ans(int X) {
    while(X > 0) {
        ans *= X;
        --X;
    }
}

int main() {
    cin >> N >> M;

    if(abs(N - M) > 1) {
        cout << 0 << endl;
        return 0;
    }

    mul_factorial_to_ans(N);
    mul_factorial_to_ans(M);

    if(abs(N - M) == 0) ans *= 2;
    cout << ans.val() << endl;

    return 0;
}
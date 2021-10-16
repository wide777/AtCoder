#include <atcoder/modint>
#include <iostream>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    mint X = A * B;
    X *= C;
    cout << X.val() << endl;

    return 0;
}
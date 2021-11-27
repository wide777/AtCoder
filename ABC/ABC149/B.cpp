#include <iostream>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    long long a = max(0LL, A - K);
    K = max(0LL, K - A);
    long long b = max(0LL, B - K);
    cout << a << " " << b << endl;

    return 0;
}
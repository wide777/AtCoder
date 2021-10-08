#include <iostream>
using namespace std;

int main() {
    const int MOD = 10007;
    int n;
    cin >> n;

    long long a[n];
    a[0] = 0, a[1] = 0, a[2] = 1;
    for(int i = 3; i < n; ++i) {
        a[i] = (a[i - 3] + a[i - 2] + a[i - 1]) % MOD;
    }
    cout << a[n - 1] << endl;

    return 0;
}
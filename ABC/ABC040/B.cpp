#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1 << 29;
    for(int h = 1; h <= n; ++h) {
        int w = n / h;
        int mod = n % h;
        ans = min(ans, abs(h - w) + mod);
    }
    cout << ans << endl;

    return 0;
}
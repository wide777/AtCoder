#include <iostream>
using namespace std;
int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    long long ans = 0;
    while(x < y / a && a * x <= x + b) {
        x *= a;
        ans++;
    }
    cout << ans + (y - 1 - x) / b << endl;
}
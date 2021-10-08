#include <iostream>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    long long ans = 0;
    ans += b / x + 1;  // num of d(%x==0) (0 <= d <= b)
    ans -= a / x + 1;  // num of d(%x==0) (0 <= d <= a)
    if(a % x == 0) ++ans;
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int p = min(x, y);
    int q = max(x, y);
    int cost1 = (x - p) * a + (y - p) * b + 2 * p * c;
    int cost2 = 2 * q * c;
    int cost3 = x * a + y * b;
    cout << min(min(cost1, cost2), cost3) << endl;
}
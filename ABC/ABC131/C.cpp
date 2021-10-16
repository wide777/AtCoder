#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll U = b - a + 1;
    ll A = b / c - (a + c - 1) / c + 1;
    ll B = b / d - (a + d - 1) / d + 1;
    ll AB = b / lcm(c, d) - (a + lcm(c, d) - 1) / (lcm(c, d)) + 1;
    ll ans = U - A - B + AB;
    cout << ans << endl;
}
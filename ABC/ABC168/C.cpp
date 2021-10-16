#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    const double pi = 3.141592653589793;
    double hx = a * cos(2 * pi / 12 * h + 2 * pi / 60 / 12 * m);
    double hy = a * sin(2 * pi / 12 * h + 2 * pi / 60 / 12 * m);
    double mx = b * cos(2 * pi / 60 * m);
    double my = b * sin(2 * pi / 60 * m);

    double ans = sqrt((hx - mx) * (hx - mx) + (hy - my) * (hy - my));
    cout << fixed << setprecision(15) << ans << endl;
}
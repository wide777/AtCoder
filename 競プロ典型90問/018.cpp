#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    const double PI = acos(-1.0);
    double t, l, x, y, q;
    cin >> t >> l >> x >> y >> q;
    REP(i, q) {
        double e;
        cin >> e;
        double theta = 2 * PI * e / t;
        double Ey = -l / 2 * sin(theta);
        double Ez = l / 2 - l / 2 * cos(theta);
        double A = sqrt(x * x + (y - Ey) * (y - Ey));
        double B = Ez;
        double res = atan2(B, A) * 180 / PI;
        cout << fixed << setprecision(10) << res << endl;
    }
}
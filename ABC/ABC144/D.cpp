#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const double PI = acos(-1.0);
double a, b, x;

double f(double theta) {
    if(tan(theta) <= b / a) {
        return (a * b) - (a * a * tan(theta) / 2);
    } else {
        return b * b / tan(theta) / 2;
    }
}

int main() {
    cin >> a >> b >> x;
    x /= a;

    double left = 0, right = PI / 2;
    REP(i, 100) {
        double mid = (left + right) / 2;
        if(f(mid) >= x) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << fixed << setprecision(10) << left * 180 / PI << endl;
}
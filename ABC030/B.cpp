#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    n %= 12;

    double l = n * 360.0 / 12 + m * 30.0 / 60;
    double s = m * 360.0 / 60;
    double agl = (l - s > 0) ? l - s: s - l;
    cout << fixed << setprecision(10) << min(agl, 360 - agl) << endl;

    return 0;
}
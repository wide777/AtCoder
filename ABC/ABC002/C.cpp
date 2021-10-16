#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    a -= x, b -= y, c -= x, d -= y;
    cout << fixed << setprecision(10) << abs(a * d - b * c) / 2 << endl;

    return 0;
}
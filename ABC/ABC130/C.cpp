#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;
    bool f = x + x == w && y + y == h;
    cout << fixed << setprecision(10) << w * h / 2 << " " << f << endl;
}
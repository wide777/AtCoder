#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, D, H;
    cin >> N >> D >> H;

    double res = 0;
    REP(i, N) {
        double d, h;
        cin >> d >> h;
        double grad = (H - h) / (D - d);
        res = max(res, h - grad * d);
    }
    cout << fixed << setprecision(10) << res << endl;
}
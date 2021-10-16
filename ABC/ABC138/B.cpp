#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, a;
    cin >> n;
    double ans = 0;
    REP(i, n) {
        cin >> a;
        ans += 1.0 / a;
    }
    cout << fixed << setprecision(6) << 1 / ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        double x = 1.0 / n;
        for(int j = i; j < k; j *= 2) {
            x *= (1.0 / 2);
        }
        ans += x;
    }
    cout << fixed << setprecision(10) << ans << endl;
}
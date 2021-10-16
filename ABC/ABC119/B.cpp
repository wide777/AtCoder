#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    double res = 0;
    REP(i, n) {
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") {
            res += x;
        } else {
            res += 380000.0 * x;
        }
    }
    cout << fixed << setprecision(15) << res << endl;
}
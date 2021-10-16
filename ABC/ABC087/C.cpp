#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(2, vector<int>(n));
    REP(i, 2) REP(j, n) cin >> a[i][j];

    int res = 0;
    for(int cnt = 0; cnt < n; cnt++) {
        int sum = 0;
        for(int i = 0; i + cnt < n; i++) {
            sum += a[0][i];
        }
        for(int i = n - 1; n - 1 - i <= cnt; i--) {
            sum += a[1][i];
        }
        res = max(res, sum);
    }
    cout << res << endl;
}
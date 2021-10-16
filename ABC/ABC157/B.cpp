#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<vector<int> > a(3, vector<int>(3));
    vector<vector<bool> > c(3, vector<bool>(3, false));
    REP(i, 3) REP(j, 3) cin >> a[i][j];

    int n;
    cin >> n;
    vector<int> b(n);
    REP(i, n) cin >> b[i];

    REP(h, n) REP(i, 3) REP(j, 3) {
        if(a[i][j] == b[h]) c[i][j] = true;
    }

    REP(i, 3) {
        if((c[i][0] && c[i][1] && c[i][2]) || (c[0][i] && c[1][i] && c[2][i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if((c[0][0] && c[1][1] && c[2][2]) || (c[0][2] && c[1][1] && c[2][0])) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<vector<int> > c(3, vector<int>(3));
    REP(i, 3) REP(j, 3) cin >> c[i][j];

    REP(i, 3) {
        int m = 101;
        REP(j, 3) { m = min(m, c[i][j]); }
        REP(j, 3) { c[i][j] -= m; }
    }
    REP(j, 3) {
        int m = 101;
        REP(i, 3) { m = min(m, c[i][j]); }
        REP(i, 3) { c[i][j] -= m; }
    }

    bool allzero = true;
    REP(i, 3) {
        REP(j, 3) {
            if(c[i][j] != 0) allzero = false;
        }
    }
    if(allzero) {
        puts("Yes");
    } else {
        puts("No");
    }
}
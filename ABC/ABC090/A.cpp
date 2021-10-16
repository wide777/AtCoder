#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<vector<char> > c(3, vector<char>(3));
    REP(i, 3) REP(j, 3) cin >> c[i][j];
    cout << c[0][0] << c[1][1] << c[2][2] << endl;
}
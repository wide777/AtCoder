#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n;
const int LIMIT = 1002;
vector<vector<int> > tiles(LIMIT, vector<int>(LIMIT, 0));

int main() {
    cin >> n;
    REP(i, n) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        tiles[lx][ly]++;
        tiles[lx][ry]--;
        tiles[rx][ly]--;
        tiles[rx][ry]++;
    }

    for(int i = 0; i < LIMIT; i++) {
        for(int j = 1; j < LIMIT; j++) {
            tiles[i][j] += tiles[i][j - 1];
        }
    }
    for(int i = 1; i < LIMIT; i++) {
        for(int j = 0; j < LIMIT; j++) {
            tiles[i][j] += tiles[i - 1][j];
        }
    }

    vector<int> ans(n + 1, 0);
    REP(i, LIMIT) REP(j, LIMIT) ans[tiles[i][j]]++;
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
}
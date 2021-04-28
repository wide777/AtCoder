#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int> > a(h, vector<int>(w));
    vector<int> hsum(h, 0), wsum(w, 0);
    REP(i, h) REP(j, w) cin >> a[i][j];
    REP(i, h) REP(j, w) hsum[i] += a[i][j];
    REP(j, w) REP(i, h) wsum[j] += a[i][j];

    REP(i, h) {
        REP(j, w) {
            if(j) cout << " ";
            cout << hsum[i] + wsum[j] - a[i][j];
        }
        cout << endl;
    }
}
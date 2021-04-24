#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int> > x(n, vector<int>(d, 0));
    REP(i, n) REP(j, d) cin >> x[i][j];

    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i; j < n; j++) {
            int dist = 0;
            for(int k = 0; k < d; k++) {
                dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            for(int l = 1; dist >= l * l; l++) {
                if(dist == l * l) ans++;
            }
        }
    }

    cout << ans << endl;
}
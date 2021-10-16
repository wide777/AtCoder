#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool> > v(m + 1, vector<bool>(n, false));
    REP(i, n) {
        int k;
        cin >> k;
        REP(j, k) {
            int a;
            cin >> a;
            v[a][i] = true;
        }
    }

    int res = 0;
    for(int i = 1; i <= m; ++i) {
        if(all_of(v[i].begin(), v[i].end(), [](bool f) { return f; })) ++res;
    }
    cout << res << endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

void comb(vector<vector<ll> > &v) {
    REP(i, v.size()) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int i = 1; i < v.size(); i++) {
        for(int j = 1; j < i; j++) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
}

int main() {
    int l;
    cin >> l;
    vector<vector<ll> > v(l, vector<ll>(l, 0));
    comb(v);
    cout << v[l - 1][11] << endl;
    return 0;
}
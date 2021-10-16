#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

const int MAX = (1 << 30);
int n, m;
vector<vector<int> > a(10, vector<int>(10));
vector<int> x(46), y(46);

int main() {
    cin >> n;
    REP(i, n) REP(j, n) cin >> a[i][j];
    cin >> m;
    REP(i, m) {
        int p, q;
        cin >> p >> q;
        x[i] = --p;
        y[i] = --q;
    }

    vector<int> v(n);
    iota(v.begin(), v.end(), 0);

    int res = MAX;
    do {
        int sum = 0;
        REP(i, n) sum += a[i][v[i]];
        REP(i, m) {
            if((v[x[i]] == v[y[i]] + 1) || (v[x[i]] == v[y[i]] - 1)) {
                sum = MAX;
                break;
            }
        }
        res = min(res, sum);
    } while(next_permutation(v.begin(), v.end()));

    cout << (res != MAX ? res : -1) << endl;
}
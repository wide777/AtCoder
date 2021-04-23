#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    dsu d(n);
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        d.merge(a, b);
    }

    int res = 0;
    REP(i, n) res = max(res, d.size(i));
    cout << res << endl;
}
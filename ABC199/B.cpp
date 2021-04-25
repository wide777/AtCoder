#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];

    int m = 1001, M = 0;
    REP(i, n) {
        M = max(M, a[i]);
        m = min(m, b[i]);
    }

    if(m - M + 1 > 0) {
        cout << m - M + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
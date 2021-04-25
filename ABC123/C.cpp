#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, a;
    cin >> n;
    ll m = 1000000000000001;
    REP(i, 5) {
        cin >> a;
        m = min(m, a);
    }
    cout << 5 + (n + m - 1) / m - 1 << endl;
}
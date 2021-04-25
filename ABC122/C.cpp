#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<ll> l(q), r(q);
    REP(i, q) cin >> l[i] >> r[i];

    vector<ll> sum(n + 1, 0);
    for(int i = 1; i < n; i++) {
        sum[i + 1] = sum[i];
        if(s[i - 1] == 'A' && s[i] == 'C') {
            sum[i + 1]++;
        }
    }
    REP(i, q) cout << sum[r[i]] - sum[l[i]] << endl;
}
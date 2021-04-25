#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 1), b(m + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for(int i = 1; i <= m; i++) {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    int j = m;
    int res = 0;
    for(int i = 0; i <= n; i++) {
        if(a[i] > k) break;
        while(b[j] > k - a[i]) j--;
        res = max(res, i + j);
    }
    cout << res << endl;
}
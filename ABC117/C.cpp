#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(m);
    REP(i, m) cin >> a[i];
    sort(a.begin(), a.end());

    vector<ll> diff;
    REP(i, m - 1) diff.push_back(a[i + 1] - a[i]);
    sort(diff.begin(), diff.end(), greater<int>());

    ll res = 0;
    for(int i = n - 1; i < m; ++i) res += diff[i];
    cout << res << endl;
}
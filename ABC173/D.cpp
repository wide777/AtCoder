#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    ll res = a[0];
    for(int i = 1; i < n - 1; i++) res += a[(i + 1) / 2];
    cout << res << endl;
}
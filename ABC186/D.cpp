#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    ll res = 0;
    for(int i = 0; i < n; i++) {
        res += a[i] * (n - 1 - 2 * i);
    }
    cout << res << endl;
}
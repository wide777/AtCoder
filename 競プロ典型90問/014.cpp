#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll res = 0;
    REP(i, n) res += abs(a[i] - b[i]);
    cout << res << endl;
}
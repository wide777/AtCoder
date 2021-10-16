#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<ll> h(n);
    REP(i, n) cin >> h[i];
    sort(h.begin(), h.end());
    for(int i = 0; i < n - k; i++) {
        ans += h[i];
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    const int MOD = 1e9 + 7;
    ll N;
    cin >> N;
    vector<ll> C(N);
    REP(i, N) cin >> C[i];

    sort(C.begin(), C.end());

    ll ans = 1;
    REP(i, N) ans = (ans * (C[i] - i)) % MOD;
    cout << ans % MOD << endl;
}
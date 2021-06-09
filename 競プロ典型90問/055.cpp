#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];

    ll ans = 0;
    REP(i, N) REP(j, i) REP(k, j) REP(l, k) REP(m, l) {
        if(A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q) ans++;
    }
    cout << ans << endl;
}
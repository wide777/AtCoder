#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    vector<ll> MA(N + 1);
    for(int i = 0; i < N; i++) MA[i + 1] = MA[i] > A[i] ? MA[i] : A[i];

    vector<ll> S(N + 1);
    for(int i = 0; i < N; i++) S[i + 1] += S[i] + A[i];

    vector<ll> SS(N + 1);
    for(int i = 0; i < N; i++) SS[i + 1] += SS[i] + S[i + 1];

    REP(i, N) {
        ll ans = MA[i + 1] * (i + 1) + S[i + 1] + SS[i];
        cout << ans << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> X(2 * N);
    for(int i = 0; i < N; i++) {
        ll A, B;
        cin >> A >> B;
        X[2 * i] = B;
        X[2 * i + 1] = A - B;
    }

    sort(X.begin(), X.end(), greater<ll>());

    ll ans = 0;
    REP(i, K) ans += X[i];
    cout << ans << endl;
}
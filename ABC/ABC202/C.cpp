#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];
    REP(i, N) cin >> C[i];

    map<int, int> M;
    REP(i, N) M[B[C[i] - 1]]++;

    ll ans = 0;
    REP(i, N) ans += M[A[i]];
    cout << ans << endl;
}
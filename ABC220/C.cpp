#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N, X;
    cin >> N;
    ll cSum[N + 1] = {0};
    REP(i, N) {
        int A;
        cin >> A;
        cSum[i + 1] += cSum[i] + A;
    }
    cin >> X;

    ll q = X / cSum[N];
    if(X >= cSum[N]) {
        X %= cSum[N];
    }
    for(int i = 1; i <= N; ++i) {
        if(X < cSum[i]) {
            cout << i + q * N << endl;
            break;
        }
    }

    return 0;
}
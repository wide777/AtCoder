#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N), X(N);
    REP(i, N) {
        cin >> A[i];
        X[i] = A[i] - (i + 1);
    }
    REP(i, Q) {
        ll K;
        cin >> K;
        int pos = lower_bound(X.begin(), X.end(), K) - X.begin();
        if(pos == N) {
            cout << A[N - 1] + (K - X[N - 1]) << endl;
        } else {
            cout << (A[pos] - 1) - (X[pos] - K) << endl;
        }
    }
}
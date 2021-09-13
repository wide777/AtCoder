#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> S(N), T(N);
    REP(i, N) cin >> S[i];
    REP(i, N) cin >> T[i];

    vector<int> dp(N);
    REP(i, N) dp[i] = T[i];
    for(int i = 1; i < 2 * N; i++) {
        int i0 = (i - 1) % N;
        int i1 = i % N;
        if(S[i0] + dp[i0] < dp[i1]) {
            dp[i1] = S[i0] + dp[i0];
        }
    }
    REP(i, N) cout << dp[i] << endl;
}
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    long long A[N][M];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) cin >> A[i][j];
    }

    long long ans = 0;
    for(int i = 0; i < M - 1; ++i) {
        for(int j = i + 1; j < M; ++j) {
            long long tot = 0;
            for(int k = 0; k < N; ++k) {
                tot += max(A[k][i], A[k][j]);
            }
            ans = max(tot, ans);
        }
    }
    cout << ans << endl;

    return 0;
}
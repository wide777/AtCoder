#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for(auto &i : A) cin >> i;

    // 不便さ（初期値）の計算
    long long ans = 0;
    vector<long long> B(N);
    for(int i = 0; i < N - 1; i++) {
        B[i + 1] = A[i + 1] - A[i];
        ans += abs(B[i + 1]);
    }

    // クエリの実行
    for(int i = 0; i < Q; i++) {
        int L, R, V;
        cin >> L >> R >> V;
        long long prev = abs(B[L - 1]) + abs(B[R]);
        if(L > 1) B[L - 1] += V;
        if(R < N) B[R] -= V;
        long long next = abs(B[L - 1]) + abs(B[R]);
        ans += (next - prev);
        cout << ans << endl;
    }

    return 0;
}
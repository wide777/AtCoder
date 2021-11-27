#include <atcoder/dsu>
#include <iostream>
using namespace atcoder;
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    int A[M], B[M];
    for(int i = 0; i < M; ++i) {
        cin >> A[i] >> B[i];
        --A[i], --B[i];
    }

    dsu d(N);
    long long ans[M];
    ans[0] = N * (N - 1) / 2;
    for(int i = 0; i < M - 1; ++i) {
        ans[i + 1] = ans[i];
        int id = M - i - 1;
        if(!d.same(A[id], B[id])) {
            ans[i + 1] -= d.size(A[id]) * d.size(B[id]);
            d.merge(A[id], B[id]);
        }
    }

    for(int i = M - 1; 0 <= i; --i) {
        cout << ans[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int N, K;
int A[100100];

bool solve(int m) {
    long long cnt = 0;
    for(int i = 0; i < N; ++i) {
        if(A[i] >= m) cnt += A[i] - m + 1;
    }
    return cnt <= K;
}

int main() {
    // Step1: Input
    cin >> N >> K;
    for(int i = 0; i < N; ++i) cin >> A[i];

    // Step2: binary_search
    long long ok = 2e9 + 1;
    long long ng = 0;
    while(abs(ok - ng) > 1) {
        long long mid = (ok + ng) / 2;
        if(solve(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    // Step3: Calculate answer
    long long ans = 0, rem = K;
    for(int i = 0; i < N; ++i) {
        if(A[i] >= ok) {
            long long d = A[i] - ok + 1;
            ans += (A[i] + ok) * d / 2;
            rem -= d;
        }
    }
    ans += rem * (ok - 1);

    // Step4: Output
    cout << ans << endl;

    return 0;
}
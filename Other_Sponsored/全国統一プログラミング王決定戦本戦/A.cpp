#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    long long cusum[N + 1] = {0};
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        cusum[i + 1] = cusum[i] + A[i];
    }

    for(int k = 1; k <= N; ++k) {
        long long M = 0;
        for(int i = 0; i + k <= N; ++i) {
            M = max(M, cusum[i + k] - cusum[i]);
        }
        cout << M << endl;
    }

    return 0;
}
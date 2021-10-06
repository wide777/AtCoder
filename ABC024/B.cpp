#include <iostream>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int A[N];
    for(int i = 0; i < N; ++i) cin >> A[i];

    int ans = 0;
    for(int i = 0; i < N - 1; ++i) {
        if(A[i] + T > A[i + 1]) {
            ans += A[i + 1] - A[i];
        } else {
            ans += T;
        }
    }
    cout << ans + T << endl;

    return 0;
}
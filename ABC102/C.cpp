#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        A[i] -= (i + 1);
    }
    sort(A, A + N);

    int b;
    if(N % 2 == 1) {
        b = A[N / 2];
    } else {
        b = (A[N / 2 - 1] + A[N / 2]) / 2;
    }

    long long ans = 0;
    for(int i = 0; i < N; ++i) ans += abs(A[i] - b);
    cout << ans << endl;

    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) cin >> A[i] >> B[i];

    vector<int> C = A;
    vector<int> D = B;
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());
    int enter = C[N / 2];
    int exit = D[N / 2];

    long long ans = 0;
    for(int i = 0; i < N; ++i) {
        ans += abs(A[i] - enter) + (B[i] - A[i]) + abs(B[i] - exit);
    }
    cout << ans << endl;

    return 0;
}
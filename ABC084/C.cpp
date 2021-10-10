#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int C[N - 1], S[N - 1], F[N - 1];
    for(int i = 0; i < N - 1; ++i) cin >> C[i] >> S[i] >> F[i];

    for(int i = 0; i < N - 1; ++i) {
        int t = 0;
        for(int j = i; j < N - 1; ++j) {
            if(t > S[j]) {
                int mul = ((t - S[j]) + F[j] - 1) / F[j];
                t = S[j] + F[j] * mul + C[j];
            } else {
                t = S[j] + C[j];
            }
        }
        cout << t << endl;
    }
    cout << 0 << endl;

    return 0;
}
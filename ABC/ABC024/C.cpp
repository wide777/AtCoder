#include <iostream>
using namespace std;

int main() {
    int N, D, K;
    cin >> N >> D >> K;
    int L[D], R[D];
    for(int i = 0; i < D; ++i) cin >> L[i] >> R[i];

    for(int i = 0; i < K; ++i) {
        int S, T;
        cin >> S >> T;

        int l, r;
        l = r = S;
        for(int i = 0; i < D; ++i) {
            if(L[i] <= l && l <= R[i]) l = L[i];
            if(L[i] <= r && r <= R[i]) r = R[i];
            if(l <= T && T <= r) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
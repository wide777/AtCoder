#include <iostream>
using namespace std;

int main() {
    int L, H, N;
    cin >> L >> H >> N;

    for(int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        if(A < L) {
            cout << L - A << endl;
        } else if(H < A) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
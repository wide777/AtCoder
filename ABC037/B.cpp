#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int a[N] = {0};

    for(int i = 0; i < Q; ++i) {
        int L, R, T;
        cin >> L >> R >> T;
        --L, --R;
        for(int j = L; j <= R; ++j) a[j] = T;
    }

    for(int i = 0; i < N; ++i) cout << a[i] << endl;

    return 0;
}
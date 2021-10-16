#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int table[N + 1] = {0};
    for(int i = 0; i < Q; ++i) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        ++table[l], --table[r + 1];
    }
    for(int i = 1; i < N; ++i) table[i] += table[i - 1];

    for(int i = 0; i < N; ++i) cout << table[i] % 2;
    cout << endl;
    return 0;
}
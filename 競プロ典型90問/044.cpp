#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    int shift_cnt = 0;
    REP(i, Q) {
        int T, x, y;
        cin >> T >> x >> y;
        x--, y--;
        if(T == 1) {
            x = (x + N - shift_cnt) % N;
            y = (y + N - shift_cnt) % N;
            swap(A[x], A[y]);
        } else if(T == 2) {
            shift_cnt = (shift_cnt + 1) % N;
        } else {
            x = (x + N - shift_cnt) % N;
            cout << A[x] << endl;
        }
    }
}
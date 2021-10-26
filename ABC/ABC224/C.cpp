#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    long long X[N], Y[N];
    REP(i, N) cin >> X[i] >> Y[i];

    int ans = 0;
    for(int i = 0; i < N - 2; ++i) {
        for(int j = i + 1; j < N - 1; ++j) {
            for(int k = j + 1; k < N; ++k) {
                if((X[i] - X[j]) * (Y[i] - Y[k]) !=
                   (Y[i] - Y[j]) * (X[i] - X[k])) {
                    ++ans;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
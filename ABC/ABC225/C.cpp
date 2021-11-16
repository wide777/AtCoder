#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    int B[N][M];
    REP(i, N) REP(j, M) cin >> B[i][j];

    REP(i, N) REP(j, M) {
        if(i == 0 && j == 0) {
            int n = (B[i][j] % 7 == 0) ? 7 : B[i][j] % 7;
            if(n + M - 1 > 7) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if((i > 0) && (B[i - 1][j] + 7 != B[i][j])) {
                cout << "No" << endl;
                return 0;
            }
            if((j > 0) && (B[i][j - 1] + 1 != B[i][j])) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
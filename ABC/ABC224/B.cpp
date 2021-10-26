#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W];
    REP(i, H) REP(j, W) cin >> A[i][j];

    for(int i1 = 0; i1 < H; ++i1) {
        for(int i2 = i1 + 1; i2 < H; ++i2) {
            for(int j1 = 0; j1 < W; ++j1) {
                for(int j2 = j1 + 1; j2 < W; ++j2) {
                    if(A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2]) {
                        puts("No");
                        return 0;
                    }
                }
            }
        }
    }

    puts("Yes");
    return 0;
}
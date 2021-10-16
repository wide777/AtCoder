#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char A[N][N], B[M][M];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) cin >> A[i][j];
    }
    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < M; ++j) cin >> B[i][j];
    }

    for(int x = 0; x < (N - M) + 1; ++x) {
        for(int y = 0; y < (N - M) + 1; ++y) {
            bool flag = true;
            for(int i = 0; i < M; ++i) {
                for(int j = 0; j < M; ++j) {
                    if(A[i + x][j + y] != B[i][j]) {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) {
                puts("Yes");
                return 0;
            }
        }
    }
    puts("No");

    return 0;
}
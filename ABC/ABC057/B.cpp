#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a[N], b[N], c[M], d[M];
    for(int i = 0; i < N; ++i) cin >> a[i] >> b[i];
    for(int i = 0; i < M; ++i) cin >> c[i] >> d[i];

    for(int i = 0; i < N; ++i) {
        int ans = 0;
        int m = 1 << 29;
        for(int j = 0; j < M; ++j) {
            if(abs(a[i] - c[j]) + abs(b[i] - d[j]) < m) {
                m = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                ans = j;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}
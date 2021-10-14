#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int F[N][10];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < 10; ++j) cin >> F[i][j];
    }
    int P[N][11];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < 11; ++j) cin >> P[i][j];
    }

    long long ans = -(1LL << 60);
    for(int bit = 1; bit < (1 << 10); ++bit) {
        long long rem = 0;
        for(int i = 0; i < N; ++i) {
            int cnt = 0;
            for(int j = 0; j < 10; ++j) {
                if(bit & (1 << j) && F[i][j] == 1) ++cnt;
            }
            rem += P[i][cnt];
        }
        ans = max(ans, rem);
    }

    cout << ans << endl;

    return 0;
}
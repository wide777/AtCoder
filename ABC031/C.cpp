#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];

    int ans = -1e9;
    for(int i = 0; i < N; ++i) {
        int maxT = -1e9, maxA = -1e9;
        for(int j = 0; j < N; ++j) {
            if(i == j) continue;
            bool odd = true;
            int takahashi = 0, aoki = 0;
            for(int k = min(i, j); k <= max(i, j); ++k) {
                if(odd) takahashi += a[k];
                else aoki += a[k];
                odd = !odd;
            }
            if(maxA < aoki) {
                maxA = aoki;
                maxT = takahashi;
            }
        }
        ans = max(ans, maxT);
    }
    cout << ans << endl;

    return 0;
}
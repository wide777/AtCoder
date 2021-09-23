#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];

    int ans = 1 << 29;
    for(int tgt = -100; tgt <= 100; ++tgt) {
        int sum = 0;
        for(int i = 0; i < N; ++i) {
            sum += abs(a[i] - tgt) * abs(a[i] - tgt);
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];

    long long ans = 0;
    for(int i = 0; i < N - 1; ++i) {
        if(a[i] + a[i + 1] > x) {
            int eat = a[i] + a[i + 1] - x;
            a[i + 1] = max(0, a[i + 1] - eat);
            ans += eat;
        }
    }
    cout << ans << endl;

    return 0;
}
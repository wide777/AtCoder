#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N + 1];
    for(int i = 0; i < N; ++i) cin >> a[i];
    a[N] = 0;

    long long ans = N;
    long long cnt = 1;
    for(int i = 0; i < N; ++i) {
        if(a[i] < a[i + 1]) {
            ++cnt;
        } else {
            ans += cnt * (cnt - 1) / 2;
            cnt = 1;
        }
    }
    cout << ans << endl;

    return 0;
}
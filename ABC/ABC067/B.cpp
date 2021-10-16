#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int l[N];
    for(int i = 0; i < N; ++i) cin >> l[i];

    sort(l, l + N, greater<>());

    int ans = 0;
    for(int i = 0; i < K; ++i) ans += l[i];
    cout << ans << endl;

    return 0;
}
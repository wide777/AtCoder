#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int D, N, M;
    cin >> D >> N >> M;
    int d[N + 1];
    for(int i = 1; i < N; ++i) cin >> d[i];
    d[0] = 0, d[N] = D;
    sort(d, d + N);

    int ans = 0;
    for(int i = 0; i < M; ++i) {
        int k;
        cin >> k;
        int id = lower_bound(d, d + N + 1, k) - d;
        int tmp = abs(d[id] - k);
        if(id >= 1) tmp = min(tmp, abs(d[id - 1] - k));
        ans += tmp;
    }
    cout << ans << endl;

    return 0;
}
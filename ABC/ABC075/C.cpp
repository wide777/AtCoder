#include <atcoder/dsu>
#include <iostream>
using namespace atcoder;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a[M], b[M];
    for(int i = 0; i < M; ++i) {
        cin >> a[i] >> b[i];
        --a[i], --b[i];
    }

    int ans = 0;
    for(int i = 0; i < M; ++i) {
        dsu d(N);
        for(int j = 0; j < M; ++j) {
            if(i == j) continue;
            d.merge(a[j], b[j]);
        }
        if(d.same(a[i], b[i]) == false) ++ans;
    }
    cout << ans << endl;

    return 0;
}
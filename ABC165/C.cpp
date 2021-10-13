#include <iostream>
using namespace std;

int N, M, Q;
int a[50], b[50], c[50], d[50];
int ans = 0;
int A[10];

void dfs(int cu = 0, int lst = 1) {
    if(cu == N) {
        int rem = 0;
        for(int i = 0; i < Q; ++i) {
            if(A[b[i]] - A[a[i]] == c[i]) rem += d[i];
        }
        ans = max(ans, rem);
        return;
    }

    for(int i = lst; i <= M; ++i) {
        A[cu] = i;
        dfs(cu + 1, i);
    }
}

int main() {
    cin >> N >> M >> Q;
    for(int i = 0; i < Q; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        --a[i], --b[i];
    }
    dfs();
    cout << ans << endl;

    return 0;
}
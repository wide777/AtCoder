#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

vector<int> T, K;
vector<int> seen;
ll ans = 0;

void dfs(int cur, vector<vector<int>> &A) {
    if(seen[cur] == 1) return;

    seen[cur] = 1;
    for(auto v : A[cur]) {
        if(seen[v] == 1) continue;
        ans += T[v];
        dfs(v, A);
    }
}

int main() {
    int N;
    cin >> N;

    T.assign(N, 0);
    K.assign(N, 0);
    vector<vector<int>> A(N);
    REP(i, N) {
        cin >> T[i] >> K[i];
        REP(j, K[i]) {
            ll a;
            cin >> a;
            A[i].push_back(a - 1);
        }
    }

    seen.assign(N, 0);
    dfs(N - 1, A);
    ans += T[N - 1];
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

vector<vector<int> > G;
bool seen[2000];

void dfs(int v) {
    if(seen[v]) return;
    seen[v] = true;
    for(auto vv : G[v]) dfs(vv);
}

int main() {
    ll N, M;
    cin >> N >> M;
    G.resize(N);
    REP(i, M) {
        int A, B;
        cin >> A >> B;
        G[A - 1].push_back(B - 1);
    }

    ll ans = 0;
    REP(i, N) {
        REP(j, N) seen[j] = false;
        dfs(i);
        REP(j, N) ans += seen[j];
    }
    cout << ans << endl;
}
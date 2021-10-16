#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;

vector<bool> seen;
bool terminal = false;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        cout << v + 1 << " ";
        dfs(G, next_v);
    }
    cout << v + 1 << " ";
}

int main() {
    int N;
    cin >> N;
    Graph G(N);
    REP(i, N - 1) {
        int A, B;
        cin >> A >> B;
        A--, B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    
    REP(i, N) {
        sort(G[i].begin(), G[i].end());
    }

    seen.assign(N, false);
    dfs(G, 0);
    puts("");
}
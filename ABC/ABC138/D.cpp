#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<int> count;
vector<int> seen;
vector<int> val;

void dfs(const Graph &G, int v, int tot) {
    seen[v] = 1;
    tot += val[v];
    count[v] = tot;

    for(auto to : G[v]) {
        if(!seen[to]) {
            dfs(G, to, tot);
        }
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;
    count.assign(N + 1, 0);
    seen.assign(N + 1, 0);
    val.assign(N + 1, 0);
    Graph G(N + 1);
    for(int i = 0; i < N - 1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i = 0; i < Q; ++i) {
        int p, x;
        cin >> p >> x;
        val[p] += x;
    }

    dfs(G, 1, 0);
    for(int i = 1; i <= N; ++i) cout << count[i] << " ";
    cout << endl;

    return 0;
}
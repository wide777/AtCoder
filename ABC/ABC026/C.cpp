#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int N;
Graph g(20);

int dfs(int v) {
    if(g[v].size() == 0) {
        return 1;
    }

    int m = (1 << 30), M = 0;
    for(auto next_v : g[v]) {
        int s = dfs(next_v);
        m = min(m, s);
        M = max(M, s);
    }

    return M + m + 1;
}

int main() {
    cin >> N;
    for(int i = 1; i < N; ++i) {
        int B;
        cin >> B;
        --B;
        g[B].push_back(i);
    }

    cout << dfs(0) << endl;

    return 0;
}
#include <atcoder/modint>
#include <iostream>
#include <queue>
#include <vector>
using namespace atcoder;
using namespace std;

using mint = modint1000000007;

int main() {
    // Step1: Input
    int N, M;
    cin >> N >> M;
    vector<vector<int>> to(N);
    for(int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        A--, B--;
        to[A].push_back(B);
        to[B].push_back(A);
    }

    // Step2: BFS
    const int INF = 1e9 + 7;
    vector<int> dist(N, INF);
    queue<int> q;
    q.push(0), dist[0] = 0;
    vector<int> vs;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        vs.push_back(v);
        for(int u : to[v]) {
            if(dist[u] != INF) continue;
            dist[u] = dist[v] + 1;
            q.push(u);
        }
    }

    // Step3: DP
    vector<mint> dp(N);
    dp[0] = 1;
    for(int v : vs) {
        for(int u : to[v]) {
            if(dist[u] == dist[v] + 1) dp[u] += dp[v];
        }
    }

    // Step4: Output
    mint ans = dp[N - 1];
    cout << ans.val() << endl;

    return 0;
}
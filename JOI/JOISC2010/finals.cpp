#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

struct Edge {
    ll to;
    ll weight;
};

struct Graph {
    ll V;
    vector<vector<Edge>> G;
    vector<ll> res;

    Graph(ll n) {
        V = n;
        G.resize(V);
    }

    void add_edge(ll s, ll t, ll weight) {
        G[s].emplace_back((Edge){t, weight});
        G[t].emplace_back((Edge){s, weight});
    }

    void prim(ll s = 0) {
        vector<bool> seen(V, false);
        priority_queue<P, vector<P>, greater<P>> que;
        que.push({0, s});
        while(!que.empty()) {
            ll weight = que.top().first;
            ll v = que.top().second;
            que.pop();
            if(seen[v]) continue;
            seen[v] = true;
            if(v != s) res.emplace_back(weight);
            for(auto e : G[v]) {
                if(seen[e.to]) continue;
                que.push({e.weight, e.to});
            }
        }
        sort(res.begin(), res.end());
    }
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    Graph G(N);
    for(int i = 0; i < M; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        --A, --B;
        G.add_edge(A, B, C);
    }
    G.prim();

    int ans = 0;
    for(int i = 0; i < N - K; ++i) {
        ans += G.res[i];
    }
    cout << ans << endl;

    return 0;
}
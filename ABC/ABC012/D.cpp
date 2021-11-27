#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

struct Graph {
    const ll INF = 1LL << 60;
    ll V;
    vector<vector<ll>> dist;
    bool negative_cycle;

    Graph(ll n) {
        V = n;
        dist.assign(V, vector<ll>(V, INF));
        for(int i = 0; i < V; ++i) dist[i][i] = 0;
    }

    void add_edge(ll s, ll t, ll d) {
        dist[s][t] = d;
    }

    void warshall_floyd() {
        for(int k = 0; k < V; ++k) {
            for(int i = 0; i < V; ++i) {
                if(dist[i][k] == INF) continue;
                for(int j = 0; j < V; ++j) {
                    if(dist[k][j] == INF) continue;
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    bool is_negative() {
        for(int i = 0; i < V; ++i) {
            if(dist[i][i] < 0) return true;
        }
        return false;
    }
};

int main() {
    int V, E;
    cin >> V >> E;

    Graph G(V);
    for(int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        --s, --t;
        G.add_edge(s, t, d);
        G.add_edge(t, s, d);
    }
    G.warshall_floyd();

    ll ans = 1e9;
    for(int i = 0; i < V; ++i) {
        ll M = 0;
        for(int j = 0; j < V; ++j) {
            if(i == j) continue;
            M = max(M, G.dist[i][j]);
        }
        ans = min(ans, M);
    }
    cout << ans << endl;

    return 0;
}
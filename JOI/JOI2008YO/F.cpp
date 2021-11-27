#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

struct Edge {
    ll to;
    ll cost;
};

struct Graph {
    const ll INF = 1LL << 60;
    ll V;
    vector<vector<Edge>> G;
    vector<ll> dist;

    Graph(ll n) {
        V = n;
        G.resize(V);
        dist.resize(V);
    }

    void add_edge(ll s, ll t, ll cost) {
        Edge e;
        e.to = t, e.cost = cost;
        G[s].emplace_back(e);
    }

    void dijkstra(ll s) {
        for(int i = 0; i < V; ++i) dist[i] = INF;
        dist[s] = 0;
        priority_queue<P, vector<P>, greater<P>> que;
        que.push({0, s});
        while(!que.empty()) {
            P p = que.top();
            que.pop();
            ll v = p.second;
            if(dist[v] < p.first) continue;
            for(auto e : G[v]) {
                if(dist[v] + e.cost < dist[e.to]) {
                    dist[e.to] = dist[v] + e.cost;
                    que.push({dist[e.to], e.to});
                }
            }
        }
    }
};

int main() {
    int n, k;
    cin >> n >> k;

    Graph G(n);
    for(int i = 0; i < k; ++i) {
        int q;
        cin >> q;
        if(q == 0) {
            int a, b;
            cin >> a >> b;
            --a, --b;
            G.dijkstra(a);
            cout << (G.dist[b] != G.INF ? G.dist[b] : -1) << endl;
        } else if(q == 1) {
            int c, d, e;
            cin >> c >> d >> e;
            --c, --d;
            G.add_edge(c, d, e);
            G.add_edge(d, c, e);
        }
    }

    return 0;
}
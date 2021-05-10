#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

void dijkstra(int start, vector<ll> &dist, const vector<pair<int, ll>> G[]) {
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>>
        Q;
    dist[start] = 0;
    Q.push(make_pair(0, start));
    while(!Q.empty()) {
        int pos = Q.top().second;
        Q.pop();
        REP(i, G[pos].size()) {
            int to = G[pos][i].first;
            ll cost = G[pos][i].second;
            if(dist[to] > dist[pos] + cost) {
                dist[to] = dist[pos] + cost;
                Q.push(make_pair(dist[to], to));
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(m + 1), B(m + 1), C(m + 1);
    vector<pair<int, ll>> G[n + 1];
    for(int i = 1; i <= m; i++) {
        cin >> A[i] >> B[i] >> C[i];
        G[A[i]].push_back(make_pair(B[i], C[i]));
        G[B[i]].push_back(make_pair(A[i], C[i]));
    }

    vector<ll> dist1(n + 1, (1LL << 60));
    dijkstra(1, dist1, G);

    vector<ll> distN(n + 1, (1LL << 60));
    dijkstra(n, distN, G);

    for(int i = 1; i <= n; i++) {
        cout << dist1[i] + distN[i] << endl;
    }
}
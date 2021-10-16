#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
static const int MAX = 100000;

int n;
Graph g(MAX + 1);
vector<int> dist(MAX + 1);

void bfs(int start) {
    for(int i = 1; i <= n; ++i) dist[i] = -1;

    queue<int> que;
    dist[start] = 0;
    que.push(start);
    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for(int nv : g[v]) {
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
}

int main() {
    cin >> n;
    REP(i, n - 1) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(1);
    int maxd = -1, maxid = -1;
    for(int i = 1; i <= n; ++i) {
        if(maxd < dist[i]) {
            maxd = dist[i];
            maxid = i;
        }
    }

    bfs(maxid);
    maxd = -1;
    for(int i = 1; i <= n; ++i) {
        if(maxd < dist[i]) maxd = dist[i];
    }

    cout << maxd + 1 << endl;
}
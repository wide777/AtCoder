#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> G(N);
    REP(i, N - 1) {
        ll a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }

    vector<int> dist(N, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()) {
        int t = que.front();
        que.pop();
        for(int x : G[t]) {
            if(dist[x] == -1) {
                dist[x] = dist[t] + 1;
                que.push(x);
            }
        }
    }

    REP(i, Q) {
        int c, d;
        cin >> c >> d;
        if(dist[c - 1] % 2 == dist[d - 1] % 2) {
            cout << "Town" << endl;
        } else {
            cout << "Road" << endl;
        }
    }
}
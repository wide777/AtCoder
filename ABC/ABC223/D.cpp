#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> indeg(N);
    vector<vector<int>> Edges(N);
    for(int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        --A, --B;
        ++indeg[B];
        Edges[A].emplace_back(B);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < N; ++i) {
        if(indeg[i] == 0) pq.push(i);
    }

    vector<int> ans;
    while(!pq.empty()) {
        int now = pq.top();
        pq.pop();
        ans.emplace_back(now);
        for(auto e : Edges[now]) {
            --indeg[e];
            if(indeg[e] == 0) pq.push(e);
        }
    }

    if((int)ans.size() == N) {
        for(auto x : ans) cout << x + 1 << " ";
        cout << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
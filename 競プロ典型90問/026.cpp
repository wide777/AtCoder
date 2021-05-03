#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

Graph g(100000);
vector<int> color;

void dfs(int pos, int cur) {
    color[pos] = cur;
    for(auto i : g[pos]) {
        if(color[i] == -1) dfs(i, 1 - cur);
    }
}

int main() {
    int n;
    cin >> n;
    REP(i, n - 1) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    color.assign(n, -1);
    dfs(0, 0);

    int cnt = 0;
    REP(i, n) {
        if(color[i] == 0) cnt++;
    }

    auto output = [&](int col) {
        int j = 0;
        for(int i = 0; i < n && j < n / 2; i++, j++) {
            for(; color[i] != col; i++) ;
            cout << i + 1 << " ";
        }
        cout << endl;
    };

    if(2 * cnt >= n) {
        output(0);
    }
    else {
        output(1);
    }
}
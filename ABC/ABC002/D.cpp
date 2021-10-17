#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int> >;

int main() {
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for(int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    int ans = 1;
    for(int bit = 1; bit < (1 << N); ++bit) {
        int cnt = 0;
        vector<int> v;
        for(int i = 0; i < N; ++i) {
            if(bit & (1 << i)) {
                v.push_back(i);
                ++cnt;
            }
        }

        bool flag = true;
        for(int i = 0; i < (int)v.size() - 1; ++i) {
            for(int j = i + 1; j < (int)v.size(); ++j) {
                int k = 0;
                while(k < (int)G[v[i]].size()) {
                    if(G[v[i]][k] == v[j]) break;
                    ++k;
                }
                if(k == (int)G[v[i]].size()) flag = false;
            }
        }
        if(flag) ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}
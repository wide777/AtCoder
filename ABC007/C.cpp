#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int R, C;
int sy, sx, gy, gx;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<char>> c;
vector<vector<int>> dist;

void bfs() {
    queue<pair<int, int>> que;

    dist[sx][sy] = 0;
    que.push({sx, sy});

    while(!que.empty()) {
        pair<int, int> p = que.front();
        int cx = p.first, cy = p.second;
        que.pop();

        for(int i = 0; i < 4; ++i) {
            int nx = cx + dx[i], ny = cy + dy[i];
            if(c[nx][ny] == '#') continue;
            if(dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[cx][cy] + 1;
            que.push({nx, ny});
        }
    }
}

int main() {
    cin >> R >> C;
    cin >> sx >> sy >> gx >> gy;
    --sx, --sy, --gx, --gy;
    c.assign(R, vector<char>(C));
    for(int i = 0; i < R; ++i) {
        for(int j = 0; j < C; ++j) cin >> c[i][j];
    }

    dist.assign(R, vector<int>(C, -1));
    bfs();
    cout << dist[gx][gy] << endl;

    return 0;
}
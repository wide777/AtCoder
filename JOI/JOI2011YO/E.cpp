#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int H, W, N;
int ans = 0;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void bfs(const vector<vector<char>> &town, int &sx, int &sy, int obj) {
    vector<vector<int>> dist(H + 2, vector<int>(W + 2, -1));
    queue<pair<int, int>> que;

    dist[sx][sy] = 0;
    que.push({sx, sy});
    while(!que.empty()) {
        int cx = que.front().first;
        int cy = que.front().second;
        que.pop();
        for(int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if((town[nx][ny] == 'X') || (dist[nx][ny] != -1)) continue;
            if(town[nx][ny] != '.') {
                int hard = town[nx][ny] - '0';
                if(obj == hard) {
                    sx = nx, sy = ny;
                    ans += dist[cx][cy] + 1;
                    return;
                }
            }
            dist[nx][ny] = dist[cx][cy] + 1;
            que.push({nx, ny});
        }
    }
}

int main() {
    cin >> H >> W >> N;
    vector<vector<char>> town(H + 2, vector<char>(W + 2, 'X'));
    int sx, sy;
    for(int i = 1; i <= H; ++i) {
        for(int j = 1; j <= W; ++j) {
            cin >> town[i][j];
            if(town[i][j] == 'S') sx = i, sy = j;
        }
    }

    for(int i = 1; i <= N; ++i) {
        bfs(town, sx, sy, i);
    }
    cout << ans << endl;

    return 0;
}
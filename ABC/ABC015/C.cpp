#include <iostream>
using namespace std;

int N, K;
int T[5][5];

void dfs(int t = 0, int now = 0) {
    if(now == N) {
        if(t == 0) {
            cout << "Found" << endl;
            exit(0);
        }
        return;
    }

    for(int i = 0; i < K; ++i) {
        dfs(t ^ T[now][i], now + 1);
    }
}

int main() {
    cin >> N >> K;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < K; ++j) cin >> T[i][j];
    }

    dfs();
    cout << "Nothing" << endl;

    return 0;
}
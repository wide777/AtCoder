#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    char S[H][W];
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) cin >> S[i][j];
    }

    int ans = 0;
    for(int i = 1; i < H; ++i) {
        for(int j = 1; j < W; ++j) {
            int cnt = 0;
            if(S[i - 1][j - 1] == '#') ++cnt;
            if(S[i - 1][j] == '#') ++cnt;
            if(S[i][j - 1] == '#') ++cnt;
            if(S[i][j] == '#') ++cnt;
            if(cnt == 1 || cnt == 3) ++ans;
        }
    }
    cout << ans << endl;

    return 0;
}
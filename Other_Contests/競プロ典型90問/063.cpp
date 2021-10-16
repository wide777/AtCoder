#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    // 入力
    int H, W;
    cin >> H >> W;
    vector<vector<int>> P(H, vector<int>(W));
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) cin >> P[i][j];
    }

    // H行目を全探索
    int ans = 0;
    for(int bit = 1; bit < (1 << H); bit++) {
        // 選んだ行iについてP[i][j]がすべて等しい列jの値をRに代入
        vector<int> R;
        for(int j = 0; j < W; j++) {
            int x = 0;
            bool flg = true;
            for(int i = 0; i < H; i++) {
                if((bit & (1 << i)) == 0) continue;
                if(x == 0) {
                    x = P[i][j];
                } else if(x != P[i][j]) {
                    flg = false;
                    break;
                }
            }
            if(flg) R.push_back(x);
        }

        // bitの1が立っている長さをcntHに代入
        int cntH = 0;
        for(int i = 0; i < H; i++) {
            if(bit & (1 << i)) cntH++;
        }

        // Rのうち最頻値の要素数をcntWに代入
        int cntW = 0;
        map<int, int> Map;
        for(int i = 0; i < (int)R.size(); i++) {
            Map[R[i]]++;
            cntW = max(cntW, Map[R[i]]);
        }

        // 解の更新
        ans = max(ans, cntH * cntW);
    }

    // 解の出力
    cout << ans << endl;
}
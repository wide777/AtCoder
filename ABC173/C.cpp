#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<char> > c(h, vector<char>(w));
    REP(i, h) REP(j, w) cin >> c[i][j];

    int ans = 0;
    for(int bit1 = 0; bit1 < (1 << h); bit1++) {
        for(int bit2 = 0; bit2 < (1 << w); bit2++) {
            vector<vector<char> > x = c;
            for(int i = 0; i < h; i++) {
                if(bit1 & (1 << i)) {
                    for(int j = 0; j < w; j++) {
                        x[i][j] = ',';
                    }
                }
            }
            for(int j = 0; j < w; j++) {
                if(bit2 & (1 << j)) {
                    for(int i = 0; i < h; i++) {
                        x[i][j] = ',';
                    }
                }
            }

            int cnt = 0;
            for(int i = 0; i < h; i++) {
                for(int j = 0; j < w; j++) {
                    if(x[i][j] == '#') cnt++;
                }
            }
            if(cnt == k) ans++;
        }
    }
    cout << ans << endl;
}
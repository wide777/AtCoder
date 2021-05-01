#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char> > s(h, vector<char>(w));
    REP(i, h) REP(j, w) cin >> s[i][j];
    REP(i, h) {
        REP(j, w) {
            if(s[i][j] == '#') {
                bool flg = false;

                if(i > 0 && s[i - 1][j] == '#') flg = true;
                if(j > 0 && s[i][j - 1] == '#') flg = true;
                if(i + 1 < h && s[i + 1][j] == '#') flg = true;
                if(j + 1 < w && s[i][j + 1] == '#') flg = true;

                if(!flg) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    REP(i, h) cin >> s[i];

    REP(i, h) {
        REP(j, w) {
            if(s[i][j] == '#') {
                cout << '#';
            } else {
                int cnt = 0;
                if(i - 1 >= 0 && s[i - 1][j] == '#') cnt++;
                if(i - 1 >= 0 && j - 1 >= 0 && s[i - 1][j - 1] == '#') cnt++;
                if(i - 1 >= 0 && j + 1 < w && s[i - 1][j + 1] == '#') cnt++;
                if(j - 1 >= 0 && s[i][j - 1] == '#') cnt++;
                if(j + 1 < w && s[i][j + 1] == '#') cnt++;
                if(i + 1 < h && s[i + 1][j] == '#') cnt++;
                if(i + 1 < h && j - 1 >= 0 && s[i + 1][j - 1] == '#') cnt++;
                if(i + 1 < h && j + 1 < w && s[i + 1][j + 1] == '#') cnt++;
                cout << cnt;
            }
        }
        cout << endl;
    }
}
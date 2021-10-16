#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;

    int res = 0;
    for(int i = 1; i < n; i++) {
        string x = s.substr(0, i);
        string y = s.substr(i);

        vector<bool> vx(26, false), vy(26, false);
        REP(i, x.length()) vx[x[i] - 'a'] = true;
        REP(i, y.length()) vy[y[i] - 'a'] = true;

        int cnt = 0;
        REP(i, 26) if(vx[i] && vy[i]) cnt++;
        res = max(res, cnt);
    }
    cout << res << endl;
}
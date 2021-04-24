#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<char> > s(n, vector<char>(10));
    char c;
    REP(i, n) {
        REP(j, 10) {
            cin >> c;
            s[i][j] = c;
        }
        sort(s[i].begin(), s[i].end());
    }

    ll ans = 0, cnt = 1;
    sort(s.begin(), s.end());
    REP(i, n - 1) {
        if(s[i] == s[i + 1]) {
            cnt++;
            if(i == n - 2) ans += (cnt * (cnt - 1)) / 2;
        } else {
            ans += (cnt * (cnt - 1)) / 2;
            cnt = 1;
        }
    }
    cout << ans << endl;
}
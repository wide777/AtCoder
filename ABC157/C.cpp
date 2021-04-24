#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> s(m), c(m);
    REP(i, m) {
        cin >> s[i] >> c[i];
        if(n > 1 && s[i] == 1 && c[i] == 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i = 0; i < m - 1; i++) {
        for(int j = i; j < m; j++) {
            if(s[i] == s[j] && c[i] != c[j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    string ans = "";
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[j] == i) {
                ans += to_string(c[j]);
                break;
            }
        }
        if((int)ans.size() != i) {
            if(n > 1 && i == 1) {
                ans += '1';
            } else {
                ans += '0';
            }
        }
    }
    cout << ans << endl;
    return 0;
}
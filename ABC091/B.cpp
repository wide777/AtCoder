#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n, m;
map<string, int> s, t;

int main() {
    cin >> n;
    REP(i, n) {
        string x;
        cin >> x;
        s[x]++;
    }
    cin >> m;
    REP(i, m) {
        string x;
        cin >> x;
        t[x]++;
    }

    int res = 0;
    for(auto [x, num] : s) {
        if(t.count(x)) {
            res = max(res, num - t[x]);
        } else {
            res = max(res, num);
        }
    }
    cout << res << endl;
}
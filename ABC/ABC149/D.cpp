#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p >> t;
    map<char, int> m;
    m['r'] = p;
    m['s'] = r;
    m['p'] = s;

    int res = 0;
    for(int i = 0; i < k; i++) {
        ll x = i;
        bool flag = false;
        res += m[t[x]];
        while(x + k < n) {
            if(t[x] == t[x + k]) {
                if(flag) res += m[t[x + k]];
                flag = !flag;
            } else {
                res += m[t[x + k]];
                flag = false;
            }
            x += 1LL * k;
        }
    }

    cout << res << endl;
    return 0;
}
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;

    map<char, ll> m;
    REP(i, s.length()) m[s[i]]++;
    if(m.size() != 3) {
        cout << 0 << endl;
        return 0;
    }

    ll res = 1;
    for(auto [c, i] : m) res *= i;
    for(int i = 1; 2 * i < n; i++) {
        for(int j = 0; j + 2 * i < n; j++) {
            if(s[j] != s[j + i] && s[j + i] != s[j + 2 * i] &&
               s[j] != s[j + 2 * i])
                res--;
        }
    }

    cout << res << endl;
    return 0;
}
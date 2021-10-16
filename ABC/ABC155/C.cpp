#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    map<string, int> m;
    int maxcnt = 0;
    REP(i, n) {
        cin >> s[i];
        m[s[i]]++;
        maxcnt = (maxcnt > m[s[i]]) ? maxcnt : m[s[i]];
    }

    for(const auto& x : m) {
        if(x.second == maxcnt) cout << x.first << endl;
    }
}
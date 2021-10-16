#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    int ans = 0;
    REP(i, s.length()) {
        if(s[i] != t[i]) ans++;
    }
    cout << ans / 2 << endl;
}
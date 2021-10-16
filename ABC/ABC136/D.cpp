#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int n = (int)s.length();
    vector<int> res(n, 0);
    int rs, re, ls, le;
    for(int i = 0; i < n; i = le + 1) {
        rs = i;
        for(re = rs; s[re + 1] == 'R'; ++re);
        ls = re + 1;
        for(le = ls; le < n && s[le + 1] == 'L'; ++le);
        int a = re - rs + 1, b = le - re;
        res[re] += (a + 1) / 2 + b / 2;
        res[ls] += a / 2 + (b + 1) / 2;
    }

    REP(i, n) {
        if(i) cout << " ";
        cout << res[i];
    }
    cout << endl;
}
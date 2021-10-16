#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    string t1, t2;
    bool flg = true;
    REP(i, s.length()) {
        if(flg) {
            t1 += '0';
            t2 += '1';
        } else {
            t1 += '1';
            t2 += '0';
        }
        flg = !flg;
    }

    int res1 = 0, res2 = 0;
    REP(i, s.length()) {
        if(s[i] != t1[i]) {
            res1++;
        } else if(s[i] != t2[i]) {
            res2++;
        }
    }

    cout << min(res1, res2) << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    for(int bit = 0; bit < (1 << n); ++bit) {
        string s;
        for(int i = n - 1; 0 <= i; --i) {
            if(bit & (1 << i)) {
                s += ')';
            } else {
                s += '(';
            }
        }
        int lcnt = 0, rcnt = 0;
        bool flg = true;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '(') {
                ++lcnt;
            } else {
                ++rcnt;
            }
            if(lcnt < rcnt) {
                flg = false;
                break;
            }
        }
        if(flg && lcnt == rcnt) cout << s << endl;
    }
}
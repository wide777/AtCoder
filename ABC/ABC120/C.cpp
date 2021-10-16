#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    REP(i, s.length()) {
        if(s[i] == '0') {
            cnt0++;
        } else {
            cnt1++;
        }
    }
    cout << 2 * min(cnt0, cnt1) << endl;
}
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int n = s.length(), res = 0;
    auto f = [&](int i) {
        return s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T';
    };

    REP(i, n) {
        int seq = 0;
        if(f(i)) {
            while(i < n && f(i)) {
                seq++;
                i++;
            }
        }
        res = max(res, seq);
    }
    cout << res << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    s += s;
    int slen = (int)s.length(), tlen = (int)t.length();
    for(int i = 0; i < slen - tlen + 1; ++i) {
        if(s.substr(i, tlen) == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
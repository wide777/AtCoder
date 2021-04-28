#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    bool ac = true;
    REP(i, s.length()) {
        if(i == 0) {
            if(s[i] != 'A') ac = false;
        } else if(2 <= i && i <= (int)s.length() - 2 && s[i] == 'C') {
            ++cnt;
        } else {
            if(isupper(s[i])) ac = false;
        }
    }
    if(cnt != 1) ac = false;
    cout << (ac ? "AC" : "WA") << endl;
}
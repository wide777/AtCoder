#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    ll k;
    cin >> s >> k;
    int i = 0;
    for(; i < (int)s.length(); ++i) {
        if(s[i] != '1') break;
    }
    if(k <= i) {
        cout << 1 << endl;
    } else {
        cout << s[i] << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int res = (1 << 30);
    REP(i, s.length() - 2) {
        int x = abs(753 - stoi(s.substr(i, 3)));
        res = min(res, x);
    }
    cout << res << endl;
}
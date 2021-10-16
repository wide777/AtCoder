#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool solve(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    if(s != r) return false;
    return true;
}

int main() {
    string s;
    cin >> s;
    string x = "";
    for(int i = 0; i < (int)(s.size() - 1) / 2 - 1; i++) {
        x += s[i];
    }
    string y = "";
    for(int i = (int)(s.size() + 3) / 2 - 1; i < (int)s.size(); i++) {
        y += s[i];
    }

    if(solve(s) && solve(y) && solve(y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
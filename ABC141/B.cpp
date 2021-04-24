#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    REP(i, s.length()) {
        if(((i % 2 == 0) && !(s[i] == 'R' || s[i] == 'U' || s[i] == 'D')) ||
           ((i % 2 == 1) && !(s[i] == 'L' || s[i] == 'U' || s[i] == 'D'))) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
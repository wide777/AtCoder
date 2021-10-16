#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    REP(i, s.length()) {
        if(s[i] == '1') {
            s[i] = '9';
        } else {
            s[i] = '1';
        }
    }
    cout << stoi(s) << endl;
}
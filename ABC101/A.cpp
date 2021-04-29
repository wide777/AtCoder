#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int p = 0, m = 0;
    REP(i, s.length()) {
        if(s[i] == '+') {
            p++;
        } else {
            m++;
        }
    }
    cout << p - m << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    if(s[0] == s[1] && s[1] == s[2]) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    map<char, int> m;
    REP(i, 4) m[s[i]]++;
    if(m.size() == 2 && m[s[0]] == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    REP(i, s.length()) if(s[i] == 'o') cnt++;
    cout << 700 + 100 * cnt << endl;
}
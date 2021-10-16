#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    string s;
    cin >> n >> s;
    REP(i, s.length()) {
        char x = (s[i] - 'A' + n) % 26 + 'A';
        cout << x;
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;

    REP(i, n) cout << s[i] << t[i];
    cout << endl;
}
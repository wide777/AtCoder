#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int k;
    string s;
    cin >> k >> s;
    if(k >= (int)s.size()) {
        REP(i, s.size()) cout << s[i];
    }
    if(k < (int)s.size()) {
        REP(i, k) cout << s[i];
        cout << "...";
    }
    cout << endl;
}
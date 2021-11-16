#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    set<char> s;
    REP(i, 3) {
        char c;
        cin >> c;
        s.insert(c);
    }

    if(s.size() == 1) {
        cout << 1 << endl;
    } else if(s.size() == 2) {
        cout << 3 << endl;
    } else {
        cout << 6 << endl;
    }

    return 0;
}
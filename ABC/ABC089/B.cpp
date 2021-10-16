#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    set<char> s;
    REP(i, n) {
        char c;
        cin >> c;
        s.insert(c);
    }

    if(s.count('Y')) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
}
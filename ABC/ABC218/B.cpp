#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    REP(i, 26) {
        int P;
        cin >> P;
        cout << (char)('a' + (P - 1));
    }

    cout << endl;
    return 0;
}
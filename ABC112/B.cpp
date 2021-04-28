#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, T, res = (1 << 30);
    cin >> N >> T;
    REP(i, N) {
        int c, t;
        cin >> c >> t;
        if(t <= T) res = min(res, c);
    }
    if(res != (1 << 30)) {
        cout << res << endl;
    } else {
        cout << "TLE" << endl;
    }
}
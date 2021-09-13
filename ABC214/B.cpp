#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int S, T;
    cin >> S >> T;

    int ans = 0;
    REP(a, 101) REP(b, 101) REP(c, 101) {
        if(a + b + c <= S && a * b * c <= T) ans++;
    }
    cout << ans << endl;
}
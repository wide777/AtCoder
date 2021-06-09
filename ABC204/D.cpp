#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    int tot = 0;
    bitset<100001> dp;
    dp[0] = 1;
    REP(i, N) {
        int T;
        cin >> T;
        tot += T;
        dp |= dp << T;
    }

    int ans = tot;
    REP(i, tot + 1) {
        if(dp[i]) ans = min(ans, max(i, tot - i));
    }
    cout << ans << endl;
}
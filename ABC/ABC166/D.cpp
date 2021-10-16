#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll x;
    cin >> x;
    vector<ll> dp(1001);
    REP(i, dp.size()) dp[i] = 1LL * i * i * i * i * i;

    ll a = 0, b = 0;
    REP(i, dp.size()) {
        REP(j, dp.size()) {
            if(dp[i] - dp[j] == x) a = i, b = j;
        }

        REP(j, dp.size()) {
            if(dp[i] + dp[j] == x) a = i, b = -j;
        }
    }

    cout << a << " " << b << endl;
}
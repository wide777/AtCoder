#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    vector<ll> dp(n + 1, 1);
    REP(i, n) {
        cin >> s;
        if(s == "AND") {
            dp[i + 1] = dp[i];
        } else if(s == "OR") {
            dp[i + 1] = (1LL << (i + 1)) + dp[i];
        }
    }
    cout << dp[n] << endl;
}
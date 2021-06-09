#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    const int MOD = 100000;
    int N;
    ll K;
    cin >> N >> K;

    auto digit_sum = [](int x) {
        int ans = 0;
        while(x > 0) {
            ans += x % 10;
            x /= 10;
        }
        return ans;
    };

    int pos = N, cnt = 0;
    vector<int> time_stamp(MOD, -1);
    while(time_stamp[pos] == -1) {
        time_stamp[pos] = cnt;
        cnt++;
        pos = (pos + digit_sum(pos)) % MOD;
    }

    int idx = (K - time_stamp[pos]) % (cnt - time_stamp[pos]) + time_stamp[pos];
    int ans = -1;
    REP(i, MOD) if(time_stamp[i] == idx) ans = i;
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    REP(i, n) cin >> h[i];

    int ans = 0, cnt = 0;
    REP(i, n - 1) {
        if(h[i] >= h[i + 1]) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << ans << endl;
}
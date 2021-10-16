#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int maxcnt = 0, ans = 2;
    for(int i = 2; i <= 1000; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] % i == 0) cnt++;
        }
        if(cnt >= maxcnt) {
            maxcnt = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> cnt;
    REP(i, n) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll ans = 0;
    for(const auto& i : cnt) {
        for(const auto& j : cnt) {
            if(i.first >= j.first) continue;
            ans +=
                (j.first - i.first) * (j.first - i.first) * j.second * i.second;
        }
    }
    cout << ans << endl;
}
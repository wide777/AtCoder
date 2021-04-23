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
    vector<ll> a(n), b(n);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];

    ll res = 0;
    REP(i, n) res += a[i] * b[i];

    if(res == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
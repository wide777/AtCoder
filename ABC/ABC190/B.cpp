#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    ll n, s, d;
    cin >> n >> s >> d;
    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    rep(i, n) {
        if(x[i] < s && y[i] > d) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
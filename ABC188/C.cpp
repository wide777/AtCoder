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
    vector<ll> a((1 << n) + 1);
    map<ll, ll> m;
    for(int i = 1; i <= (1 << n); i++) {
        cin >> a[i];
        m[a[i]] = i;
    }

    vector<ll> battler = a;
    for(int i = 1; i < n; i++) {
        vector<ll> winner(1, 0);
        for(int j = 1; j <= (1 << n - i); j++) {
            ll w = battler[2 * j - 1] > battler[2 * j] ? battler[2 * j - 1]
                                                       : battler[2 * j];
            winner.push_back(w);
        }
        battler = winner;
    }

    ll l = battler[1] > battler[2] ? battler[2] : battler[1];
    cout << m[l] << endl;
}
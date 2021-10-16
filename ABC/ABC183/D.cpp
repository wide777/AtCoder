#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MAX = 200000;

int main() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll> > s(n), t(n);
    REP(i, n) {
        ll p;
        cin >> s[i].first >> t[i].first >> p;
        s[i].second = t[i].second = p;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    ll sum = 0;
    vector<ll> u(MAX + 1);
    REP(i, n) {
        sum += s[i].second;
        u[s[i].first] = sum;
    }
    for(int i = 1; i <= MAX; i++) {
        if(u[i] == 0 && u[i - 1] != 0) u[i] = u[i - 1];
    }

    sum = 0;
    vector<ll> f(MAX + 1);
    REP(i, n) {
        sum -= t[i].second;
        f[t[i].first] = sum;
    }
    for(int i = 1; i <= MAX; i++) {
        if(f[i] == 0 && f[i - 1] != 0) f[i] = f[i - 1];
    }

    for(int i = 0; i <= MAX; i++) {
        u[i] += f[i];
        if(u[i] > w) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
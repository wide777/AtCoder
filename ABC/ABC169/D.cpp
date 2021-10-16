#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

vector<pair<ll, ll> > prime_factorize(ll n) {
    vector<pair<ll, ll> > res;
    for(ll a = 2; a * a <= n; ++a) {
        if(n % a != 0) continue;
        ll ex = 0;
        while(n % a == 0) {
            ++ex;
            n /= a;
        }
        res.push_back({a, ex});
    }

    if(n != 1) res.push_back({n, 1});
    return res;
}

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll> > pf = prime_factorize(n);
    ll res = 0;
    for(auto [a, ex] : pf) {
        ll sum = 0;
        for(ll i = 1; sum + i <= ex; ++i) {
            sum += i;
            ++res;
        }
    }
    cout << res << endl;
}
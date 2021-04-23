#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    ll aoki_max = 0;
    vector<ll> dif(n);
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        aoki_max += a;
        dif[i] = 2 * a + b;
    }
    sort(dif.begin(), dif.end(), greater<ll>());

    ll x = 0;
    REP(i, n) {
        x += dif[i];
        if(x > aoki_max) {
            cout << i + 1 << endl;
            break;
        }
    }
}
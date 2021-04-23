#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) {
        cin >> a[i];
        if(a[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    REP(i, n) {
        if(ans > 1000000000000000000 / a[i]) {
            cout << -1 << endl;
            return 0;
        }
        ans *= a[i];
    }

    cout << ans << endl;

    return 0;
}
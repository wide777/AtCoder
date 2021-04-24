#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll x;
    cin >> x;
    ll ans = 0;
    ans += (int)(x / 500) * 1000;
    x %= 500;
    ans += (int)(x / 5) * 5;
    cout << ans << endl;
}
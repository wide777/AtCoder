#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N;
    cin >> N;

    ll ans = 0;
    // case: 11c (c >= 1)
    ans += N;
    // case: 1bc (b >= 2, c >= b)
    for(ll b = 2; N >= b * b; ++b) {
        ans += (N / b - b + 1);
    }
    // case: abc (a >= 2, b >= a, c >= b)
    for(ll a = 2; N >= a * a * a; ++a) {
        for(ll b = a; N >= a * b * b; ++b) {
            ans += (N / (a * b) - b + 1);
        }
    }
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    ans += n / (a + b) * a;
    ans += n % (a + b) >= a ? a : n % (a + b);
    cout << ans << endl;
}
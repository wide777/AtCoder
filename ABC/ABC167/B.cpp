#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    ll ans = 0;
    if(a >= k) {
        cout << k << endl;
    } else if(a + b >= k) {
        cout << a << endl;
    } else {
        cout << 2 * a + b - k << endl;
    }
}
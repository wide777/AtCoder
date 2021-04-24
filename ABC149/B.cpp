#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    if(a > k) {
        cout << a - k << " " << b << endl;
    } else if(a + b > k) {
        cout << 0 << " " << b - (k - a) << endl;
    } else {
        cout << 0 << " " << 0 << endl;
    }
}
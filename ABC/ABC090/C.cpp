#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, m;
    cin >> n >> m;
    if(n >= 2 && m >= 2) {
        cout << (n - 2) * (m - 2) << endl;
    } else if(n < 2 && m < 2) {
        cout << 1 << endl;
    } else {
        cout << max(n, m) - 2 << endl;
    }
}
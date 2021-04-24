#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    ll m = (1LL << 50);
    for(ll i = 1; i * i <= n; i++) {
        if((n % i == 0) && (i + n / i - 2) < m) m = i + n / i - 2;
    }

    cout << m << endl;
}
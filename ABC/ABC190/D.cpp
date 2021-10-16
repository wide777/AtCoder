#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    ll res = 0;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(i % 2 == 1) res += 2;
            if((i * i != n) && (n / i % 2 == 1)) res += 2;
        }
    }
    cout << res << endl;
}
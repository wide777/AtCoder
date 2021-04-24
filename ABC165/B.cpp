#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll x;
    cin >> x;
    ll deposit = 100;
    ll ans = 0;
    while(deposit < x) {
        deposit += deposit / 100;
        ans++;
    }

    cout << ans << endl;
}
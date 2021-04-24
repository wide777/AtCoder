#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(!(i % 3 == 0 || i % 5 == 0)) ans += i;
    }
    cout << ans << endl;
}
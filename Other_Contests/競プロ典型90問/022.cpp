#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = gcd(gcd(a, b), c);
    cout << (a / x - 1) + (b / x - 1) + (c / x - 1) << endl;
}
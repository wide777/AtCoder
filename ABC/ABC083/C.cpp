#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll x, y;
    cin >> x >> y;
    ll a = x, res = 0;
    while(a <= y) {
        res++;
        a *= 2;
    }
    cout << res << endl;
}
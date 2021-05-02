#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll res = 10000;
    for(int i = 0; i < 10000; i++) {
        for(int j = 0; i + j < 10000; j++) {
            if((n - a * i - b * j) >= 0 && (n - a * i - b * j) % c == 0) {
                res = min(res, i + j + (n - a * i - b * j) / c);
            }
        }
    }

    cout << res << endl;
}
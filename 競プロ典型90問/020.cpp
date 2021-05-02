#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = 1;
    for(int i = 1; i <= b; i++) {
        x *= c;
        if(a < x) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
}
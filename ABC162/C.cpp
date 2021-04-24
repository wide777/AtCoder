#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    ll k;
    cin >> k;

    ll sum = 0;
    for(int a = 1; a <= k; a++) {
        for(int b = 1; b <= k; b++) {
            for(int c = 1; c <= k; c++) {
                sum += gcd(gcd(a, b), c);
            }
        }
    }

    cout << sum << endl;
}
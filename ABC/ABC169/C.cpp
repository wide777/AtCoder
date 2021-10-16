#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b1, b2;
    scanf("%lld %lld.%lld", &a, &b1, &b2);
    cout << a * (b1 * 100 + b2) / 100 << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

const ll MAX = 1e18;

int main() {
    ll A, B;
    cin >> A >> B;
    ll ans = B / gcd(A, B);
    if(ans > MAX / A) {
        cout << "Large" << endl;
    } else {
        cout << ans * A << endl;
    }
}
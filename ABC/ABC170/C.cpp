#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x, n;
    cin >> x >> n;

    if(n == 0) {
        cout << x << endl;
        return 0;
    }

    vector<int> p(n);
    REP(i, n) cin >> p[i];

    int ans = (1 << 30);
    for(int i = 0; i <= 101; i++) {
        if(all_of(p.begin(), p.end(), [i](int x) { return x != i; }) &&
           abs(x - i) < abs(x - ans)) {
            ans = i;
        }
    }

    cout << ans << endl;
}
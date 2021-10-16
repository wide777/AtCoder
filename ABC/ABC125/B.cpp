#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    REP(i, n) cin >> v[i];
    REP(i, n) cin >> c[i];

    int res = 0;
    for(int bit = 0; bit < (1 << n); bit++) {
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            if(bit & (1 << i)) {
                x += v[i];
                y += c[i];
            }
        }
        if(x - y > res) res = x - y;
    }
    cout << res << endl;
}
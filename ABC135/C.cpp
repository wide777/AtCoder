#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n);
    REP(i, n + 1) cin >> a[i];
    REP(i, n) cin >> b[i];

    ll ans = 0;
    REP(i, n) {
        if(a[i] >= b[i]) {
            ans += b[i];
            a[i] = 0;
        } else {
            if(a[i] + a[i + 1] >= b[i]) {
                ans += b[i];
                a[i + 1] += a[i] - b[i];
                a[i] = 0;
            } else {
                ans += a[i] + a[i + 1];
                a[i] = a[i + 1] = 0;
            }
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n - 1);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];
    REP(i, n - 1) cin >> c[i];

    int ans = b[a[0] - 1];
    for(int i = 1; i < n; i++) {
        ans += b[a[i] - 1];
        if(a[i - 1] + 1 == a[i]) ans += c[a[i - 1] - 1];
    }

    cout << ans << endl;
}
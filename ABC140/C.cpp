#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> b(n + 1, 100001);
    for(int i = 1; i < n; i++) cin >> b[i];

    int ans = 0;
    REP(i, n) ans += min(b[i], b[i + 1]);
    cout << ans << endl;
}
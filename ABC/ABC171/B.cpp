#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    REP(i, k) ans += p[i];
    cout << ans << endl;
}
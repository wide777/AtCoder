#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    REP(i, n) cin >> v[i];
    sort(v.begin(), v.end());

    double ans = v[0];
    for(int i = 1; i < n; i++) ans = (ans + v[i]) / 2.0;
    cout << ans << endl;
}
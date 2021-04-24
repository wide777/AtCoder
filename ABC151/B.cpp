#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k, m, a, sum = 0;
    cin >> n >> k >> m;
    REP(i, n - 1) {
        cin >> a;
        sum += a;
    }
    if((n * m - sum) <= k) {
        cout << max(0, n * m - sum) << endl;
    } else {
        cout << -1 << endl;
    }
}
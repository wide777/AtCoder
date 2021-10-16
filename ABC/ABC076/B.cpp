#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;

    int res = 1;
    REP(i, n) { res = min(2 * res, res + k); }
    cout << res << endl;
}
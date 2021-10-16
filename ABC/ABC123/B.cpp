#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<int> x(5);
    REP(i, 5) cin >> x[i];
    int m = 0, res = 0;
    for(int i = 1; i < 5; i++) {
        m = ((x[m] - 1) % 10 + 10) % 10 < ((x[i] - 1) % 10 + 10) % 10 ? m : i;
    }
    for(int i = 0; i < 5; i++) {
        if(i != m) {
            res += ((x[i] + 9) / 10) * 10;
        } else {
            res += x[i];
        }
    }
    cout << res << endl;
}
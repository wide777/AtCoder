#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    REP(i, m) cin >> b[i];

    int a, res = 0;
    REP(i, n) {
        int sum = 0;
        REP(i, m) {
            cin >> a;
            sum += a * b[i];
        }
        sum += c;
        if(sum > 0) res++;
    }
    cout << res << endl;
}
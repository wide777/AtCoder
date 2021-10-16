#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> x(N), dif(N);
    REP(i, N) {
        cin >> x[i];
        dif[i] = abs(X - x[i]);
    }
    sort(dif.begin(), dif.end());

    int res = dif[0];
    for(int i = 1; i < N; ++i) {
        res = gcd(res, dif[i]);
    }
    cout << res << endl;
}
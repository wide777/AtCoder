#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    REP(i, n) cin >> x[i] >> y[i];

    int res = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            double grad = (double)(y[i] - y[j]) / (x[i] - x[j]);
            if(-1 <= grad && grad <= 1) res++;
        }
    }

    cout << res << endl;
}
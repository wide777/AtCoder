#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    REP(i, n) cin >> x[i] >> y[i];

    vector<int> vi(n);
    iota(vi.begin(), vi.end(), 0);
    double sum = 0;
    int cnt = 0;
    do {
        REP(i, n - 1) {
            sum += sqrt((x[vi[i]] - x[vi[i + 1]]) * (x[vi[i]] - x[vi[i + 1]]) +
                        (y[vi[i]] - y[vi[i + 1]]) * (y[vi[i]] - y[vi[i + 1]]));
        }
        cnt++;
    } while(next_permutation(vi.begin(), vi.end()));

    cout << fixed << setprecision(7) << sum / cnt << endl;
}
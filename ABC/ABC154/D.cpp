#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n), cumusum(n + 1);
    REP(i, n) {
        cin >> p[i];
        cumusum[i + 1] = cumusum[i] + p[i];
    }

    int id = 0, M = 0;
    for(int i = 0; i <= n - k; i++) {
        if(M < cumusum[k + i] - cumusum[i]) {
            M = cumusum[k + i] - cumusum[i];
            id = i;
        }
    }
    double ans = 0;
    for(int i = 0; i < k; i++) {
        ans += ((1 + p[id + i]) * p[id + i] / 2.0) / p[id + i];
    }
    cout << fixed << setprecision(7) << ans << endl;
}
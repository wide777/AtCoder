#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    int sum = 0;
    REP(i, n) {
        cin >> x[i];
        sum += x[i];
    }
    int p = round(sum / (double)n);

    int ans = 0;
    REP(i, n) ans += (x[i] - p) * (x[i] - p);
    cout << ans << endl;
}
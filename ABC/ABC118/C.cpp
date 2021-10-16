#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    int res = 0;
    for(int i = 1; i * i <= a[n - 1]; ++i) {
        if(all_of(a.begin(), a.end(), [&](int x) { return x % i == 0; })) {
            res = max(res, i);
        }
        if(all_of(a.begin(), a.end(),
                  [&](int x) { return x % (a[n - 1] / i) == 0; })) {
            res = max(res, a[n - 1] / i);
        }
    }
    cout << res << endl;
}
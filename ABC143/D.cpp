#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    REP(i, n) cin >> l[i];
    sort(l.begin(), l.end());

    int res = 0;
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            auto iter = lower_bound(l.begin(), l.end(), l[i] + l[j]);
            res += (iter - l.begin()) - j - 1;
        }
    }
    cout << res << endl;
}
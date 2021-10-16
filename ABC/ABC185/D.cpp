#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1);
    REP(i, m) cin >> a[i];
    a[m] = n + 1;

    sort(a.begin(), a.end());

    int k = (a[0] > 1) ? a[0] - 1 : 1000000001;
    REP(i, m) k = (a[i + 1] - a[i] - 1) ? min(k, a[i + 1] - a[i] - 1) : k;

    int res = (a[0] > 1) ? ceil((a[0] - 1.0) / k) : 0;
    REP(i, m) {
        if((a[i + 1] - a[i] - 1)) res += ceil((a[i + 1] - a[i] - 1.0) / k);
    }
    cout << res << endl;
}
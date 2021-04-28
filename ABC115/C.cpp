#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MAX = 1000000000;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    REP(i, n) cin >> h[i];
    sort(h.begin(), h.end());

    int m = MAX + 1;
    REP(i, n - k + 1) m = min(m, h[i + k - 1] - h[i]);
    cout << m << endl;
}
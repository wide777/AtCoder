#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    int M = -1;
    REP(i, n - 1) M = max(M, a[i + 1] - a[i]);
    M = max(M, k - a[n - 1] + a[0]);
    cout << k - M << endl;
}
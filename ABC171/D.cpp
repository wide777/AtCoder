#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, q, b, c;
    cin >> n;
    vector<int> a(n), cnt(100001);
    ll S = 0;
    REP(i, n) {
        cin >> a[i];
        cnt[a[i]]++;
        S += 1LL * a[i];
    }
    cin >> q;
    REP(i, q) {
        cin >> b >> c;
        S += 1LL * (c - b) * cnt[b];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << S << endl;
    }
}
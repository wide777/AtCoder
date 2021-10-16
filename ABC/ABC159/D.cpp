#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), cnt(n + 1);
    REP(i, n) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll sum = 0;
    REP(i, n + 1) {
        if(cnt[i] > 1) sum += cnt[i] * (cnt[i] - 1) / 2;
    }

    REP(i, n) {
        ll res = sum - cnt[a[i]] + 1;
        cout << res << endl;
    }
}
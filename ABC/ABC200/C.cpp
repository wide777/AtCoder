#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
        a[i] %= 200;
    }

    map<int, ll> m;
    REP(i, n) m[a[i]]++;

    ll res = 0;
    for(auto [key, value] : m) {
        if(value != 1) res += (value * (value - 1) / 2);
    }
    cout << res << endl;
}
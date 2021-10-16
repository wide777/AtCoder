#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    map<ll, ll> m;
    REP(i, n) {
        int a;
        cin >> a;
        m[a]++;
    }

    ll res = 0;
    for(auto [num, cnt] : m) {
        if(num < cnt) {
            res += cnt - num;
        } else if(num > cnt) {
            res += cnt;
        }
    }
    cout << res << endl;
}
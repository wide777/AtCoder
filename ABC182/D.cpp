#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> p(n + 1), s(n + 1);
    for(int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        p[i] = p[i - 1] + a;
        s[i] = s[i - 1] + p[i];
    }

    ll pMax = 0, sMax = 0;
    for(int i = 1; i <= n; i++) {
        if(p[i - 1] > pMax) pMax = p[i - 1];
        if(i != n && s[i] + pMax > sMax) {
            sMax = s[i] + pMax;
        } else if(i == n && s[i] > sMax) {
            sMax = s[i];
        }
    }

    cout << sMax << endl;
    return 0;
}
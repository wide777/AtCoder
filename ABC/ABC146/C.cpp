#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        if(a * mid + b * to_string(mid).length() > x) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << l << endl;
}
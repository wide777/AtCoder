#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll h, ans = 0;
    cin >> h;
    for(int i = 0; 0 < h; i++, h /= 2) {
        ans += pow(2, i);
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, x, l, d = 0, ans = 1;
    cin >> n >> x;
    REP(i, n) {
        cin >> l;
        d += l;
        if(d <= x) ans++;
    }
    cout << ans << endl;
}
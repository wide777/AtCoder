#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k, h;
    cin >> n >> k;
    int ans = 0;
    REP(i, n) {
        cin >> h;
        if(h >= k) ans++;
    }

    cout << ans << endl;
}
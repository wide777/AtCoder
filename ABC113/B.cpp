#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, t, a, dif = (1 << 30), res = 0;
    cin >> n >> t >> a;
    a *= 1000;
    REP(i, n) {
        int h;
        cin >> h;
        int x = abs(a - (t * 1000 - h * 6));
        if(dif > x) {
            dif = x;
            res = i + 1;
        }
    }
    cout << res << endl;
}
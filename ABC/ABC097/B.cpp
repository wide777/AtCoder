#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x;
    cin >> x;

    int res = 0;
    for(int b = 1; b <= 40; b++) {
        int a = b;
        for(int p = 1; p <= 10; p++) {
            a *= b;
            if(a > x) {
                break;
            } else {
                res = max(res, a);
            }
        }
    }
    cout << res << endl;
}
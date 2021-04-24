#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    int res = 0;
    for(int i = 0; i < 2; i++) {
        if(a > b) {
            res += a--;
        } else {
            res += b--;
        }
    }
    cout << res << endl;
}
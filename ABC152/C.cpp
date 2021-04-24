#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, p;
    cin >> n;
    int m = (1 << 30), ans = 0;
    REP(i, n) {
        cin >> p;
        if(m > p) {
            m = p;
            ans++;
        }
    }
    cout << ans << endl;
}
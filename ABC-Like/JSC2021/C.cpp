#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for(int i = 2; i <= 1000000; i++) {
        int m = ceil((double)a / i);
        if(a <= i * m && i * (m + 1) <= b) ans = i;
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    int ans = 0;
    for(double i = 1; i <= 1000000; i++) {
        if(i / z < y / x) {
            ans = i;
        }
    }
    cout << ans << endl;
}
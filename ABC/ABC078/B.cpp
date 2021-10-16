#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int res = 0;
    if(x >= y + 2 * z) res++;
    x -= (y + 2 * z);
    res += x / (y + z);
    cout << res << endl;
}
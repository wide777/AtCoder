#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll r, x, y;
    cin >> r >> x >> y;
    double dist = sqrt(x * x + y * y);

    if(dist < r) {
        cout << 2 << endl;
    } else {
        cout << (ceil(dist / r)) << endl;
    }
}
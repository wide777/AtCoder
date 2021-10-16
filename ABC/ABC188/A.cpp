#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    ll x, y;
    cin >> x >> y;
    if(x > y) {
        if(x < y + 3) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if(x + 3 > y) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
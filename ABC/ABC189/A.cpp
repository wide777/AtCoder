#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    if(c1 == c2 && c2 == c3) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }
}
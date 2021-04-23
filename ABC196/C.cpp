#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);
static const int MAX = 1000000;

int main() {
    ll n;
    cin >> n;
    int res = 0;
    for(int i = 1; i < MAX; i++) {
        string x = to_string(i) + to_string(i);
        if(n >= stoll(x)) {
            res++;
        } else {
            break;
        }
    }
    cout << res << endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    a += c;
    if(a > b) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}
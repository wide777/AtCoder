#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    string a, b;
    cin >> a >> b;
    if(a[0] + a[1] + a[2] > b[0] + b[1] + b[2]) {
        cout << a[0] - '0' + a[1] - '0' + a[2] - '0' << endl;
    } else {
        cout << b[0] - '0' + b[1] - '0' + b[2] - '0' << endl;
    }
}
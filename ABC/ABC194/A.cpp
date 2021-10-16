#define _GLIBCXX_DEBUG
// #define _LIBCPP_DEBUG 0
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int INTMAX = 2147483647;

int main() {
    ll a, b;
    cin >> a >> b;

    if(a + b >= 15 && b >= 8) {
        cout << 1 << endl;
    } else if(a + b >= 10 && b >= 3) {
        cout << 2 << endl;
    } else if(a + b >= 3) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }
}
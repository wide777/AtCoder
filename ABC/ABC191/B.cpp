#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int IINF = (1LL << 31) - 1;

int main() {
    ll n, x, a;
    cin >> n >> x;
    rep(i, n) {
        cin >> a;
        if(a != x) {
            if(i) cout << " ";
            cout << a;
        }
    }
    cout << endl;
}
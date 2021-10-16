#define _GLIBCXX_DEBUG
// #define _LIBCPP_DEBUG 0
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int INF = (1 << 30);

int main() {
    ll n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    ll m = INF;
    rep(i, n) {
        rep(j, n) {
            if(i != j && max(a[i], b[j]) < m) {
                m = max(a[i], b[j]);
            } else if(i == j && a[i] + b[j] < m) {
                m = a[i] + b[j];
            }
        }
    }

    cout << m << endl;
}
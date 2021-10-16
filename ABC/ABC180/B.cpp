#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x.at(i);

    ll m = 0;
    rep(i, n) m += abs(x.at(i));

    unsigned long long e_c = 0;
    rep(i, n) e_c += x.at(i) * x.at(i);
    double e = sqrt(e_c);

    int c = 0;
    rep(i, n) c = (c > abs(x.at(i))) ? c : abs(x.at(i));

    cout << m << endl << fixed << setprecision(15) << e << endl << c << endl;
}
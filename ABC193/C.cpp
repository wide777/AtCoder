#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;
const int INTMAX = 2147483647;

int main() {
    ll n;
    cin >> n;
    int n_s = ceil(sqrt(n));
    set<ll> cnt;
    for(int i = 2; i <= n_s; i++) {
        for(int j = 2;; j++) {
            ll p = pow(i, j);
            if(p > n) {
                break;
            } else {
                cnt.insert(p);
            }
        }
    }
    cout << n - cnt.size() << endl;
}
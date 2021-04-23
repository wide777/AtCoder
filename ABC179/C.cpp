#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i < n; i++) {
        ans += (n - 1) / i;
    }

    cout << ans << endl;
}
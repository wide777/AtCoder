#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    bool isExist = false;
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if((y[j] - y[i]) * (x[k] - x[i]) ==
                   (y[k] - y[i]) * (x[j] - x[i])) {
                    isExist = true;
                    break;
                }
            }
        }
    }
    if(isExist) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
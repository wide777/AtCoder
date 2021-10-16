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

    int res = 0;
    bool unlucky = false;
    for(int i = 1; i <= n; i++) {
        stringstream ss;
        ss << oct << i;
        string o = ss.str();
        for(int j = 0; j < o.size(); j++) {
            if(o[j] == '7') {
                unlucky = true;
                break;
            }
        }
        string d = to_string(i);
        for(int j = 0; j < d.size(); j++) {
            if(d[j] == '7') {
                unlucky = true;
                break;
            }
        }
        if(unlucky) {
            res++;
            unlucky = false;
        }
    }

    cout << n - res << endl;
}
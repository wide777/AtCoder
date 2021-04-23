#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1LL << 31) - 1;

int main() {
    string n;
    cin >> n;
    int l = n.size();
    int mincnt = INF;
    for(int bit = 1; bit < (1 << l); bit++) {
        int sum = 0, cnt = 0;
        for(int i = 0; i < l; i++) {
            if(bit & (1 << i)) {
                sum += (n[i] - '0');
            } else {
                cnt++;
            }
        }
        if(sum % 3 == 0) mincnt = min(mincnt, cnt);
    }

    cout << (mincnt == INF ? -1 : mincnt) << endl;
}
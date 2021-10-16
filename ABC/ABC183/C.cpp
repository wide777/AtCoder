#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

static const int MOD = 1000000007;
static const int INF = (1 << 30);

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int> > t(n, vector<int>(n));
    REP(i, n) REP(j, n) cin >> t[i][j];

    vector<int> v(n);
    iota(v.begin(), v.end(), 0);
    v.push_back(0);

    int ans = 0;
    do {
        int dist = 0;
        for(int i = 0; i < n; i++) dist += t[v[i]][v[i + 1]];
        if(dist == k) ans++;
    } while(next_permutation(v.begin() + 1, v.end() - 1));

    cout << ans << endl;
}
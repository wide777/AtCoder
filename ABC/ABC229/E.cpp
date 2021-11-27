#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N);
    REP(i, M) {
        int A, B;
        cin >> A >> B;
        G[A - 1].emplace_back(B - 1);
    }

    dsu d(N);
    vector<int> ans;
    ans.emplace_back(0);
    for(int i = N - 1; 0 < i; --i) {
        int a = 1;
        for(auto g : G[i]) {
            if(!d.same(i, g)) {
                --a;
                d.merge(i, g);
            }
        }
        ans.emplace_back(ans.back() + a);
    }
    reverse(ans.begin(), ans.end());
    for(auto a : ans) cout << a << endl;

    return 0;
}
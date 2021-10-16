#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;

    scc_graph g(N);
    REP(i, M) {
        int A, B;
        cin >> A >> B;
        A--, B--;
        g.add_edge(A, B);
    }

    auto scc = g.scc();

    ll ans = 0;
    for(auto v : scc) {
        if(v.size() > 1) {
            ans += (ll)v.size() * (v.size() - 1) / 2;
        }
    }
    cout << ans << endl;
}
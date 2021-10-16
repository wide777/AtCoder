#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &i : A) cin >> i;

    dsu d(200001);
    for(int i = 0; i < N / 2; i++) {
        if(A[i] != A[N - 1 - i]) {
            d.merge(A[i], A[N - 1 - i]);
        }
    }

    int ans = 0;
    vector<vector<int>> dg = d.groups();
    for(int i = 0; i < (int)dg.size(); i++) {
        if(dg[i].size() > 1) ans += dg[i].size() - 1;
    }

    cout << ans << endl;

    return 0;
}
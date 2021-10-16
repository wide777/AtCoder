#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

set<int> d;
vector<int> ans;

void pfact(int A) {
    for(int i = 2; i * i <= A; i++) {
        while(A % i == 0) {
            A /= i;
            d.insert(i);
        }
    }
    if(A != 1) d.insert(A);
}

void solve(const int M) {
    vector<bool> is_ans(M + 1, true);
    for(auto i : d) {
        if(i != 1 && i <= M) is_ans[i] = false;
    }
    for(int i = 1; i <= M; i++) {
        if(is_ans[i]) {
            ans.push_back(i);
        } else {
            for(int j = 2 * i; j <= M; j += i) {
                is_ans[j] = false;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    REP(i, N) {
        int A;
        cin >> A;
        pfact(A);
    }

    solve(M);
    cout << ans.size() << endl;
    REP(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];
    REP(i, N) {
        cin >> A[i];
        --A[i];
    }

    vector<bool> seen(N, false);
    int f = X - 1;
    int ans = 0;
    REP(i, N) {
        seen[f] = true;
        ++ans;
        f = A[f];
        if(seen[f]) break;
    }
    cout << ans << endl;

    return 0;
}
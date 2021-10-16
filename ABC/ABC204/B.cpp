#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    int ans = 0;
    REP(i, N) {
        if(A[i] > 10) ans += (A[i] - 10);
    }
    cout << ans << endl;
}
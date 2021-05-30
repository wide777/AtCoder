#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];
    REP(i, N) cin >> C[i];

    vector<int> VA(46), VB(46), VC(46);
    REP(i, N) {
        VA[A[i] % 46]++;
        VB[B[i] % 46]++;
        VC[C[i] % 46]++;
    }

    ll ans = 0;
    for(int i = 0; i < 46; i++) {
        for(int j = 0; j < 46; j++) {
            for(int k = 0; k < 46; k++) {
                if((i + j + k) % 46 == 0) {
                    ans += 1LL * VA[i] * VB[j] * VC[k];
                }
            }
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<int> A(N), B(N);
    set<int> SH, SW;
    REP(i, N) {
        cin >> A[i] >> B[i];
        SH.insert(A[i]);
        SW.insert(B[i]);
    }

    vector<int> sA, sB;
    for(auto &x : SH) sA.push_back(x);
    for(auto &x : SW) sB.push_back(x);

    REP(i, N) {
        int posA = lower_bound(sA.begin(), sA.end(), A[i]) - sA.begin();
        int posB = lower_bound(sB.begin(), sB.end(), B[i]) - sB.begin();
        cout << 1 + posA << " " << 1 + posB << endl;
    }
}
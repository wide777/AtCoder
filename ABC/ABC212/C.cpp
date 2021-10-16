#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    REP(i, N) cin >> A[i];
    REP(i, M) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int ans = abs(A[0] - B[0]);
    int j = 0;
    REP(i, N) {
        int pre_min = abs(A[i] - B[j]);
        while(j < M) {
            int now_min = abs(A[i] - B[j]);
            ans = min(ans, now_min);
            if(now_min > pre_min) {
                j--;
                break;
            }
            pre_min = now_min;
            j++;
        }
    }
    cout << ans << endl;
}
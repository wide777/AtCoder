#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    REP(i, N) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        P[i] = p1 + p2 + p3;
    }


    vector<int> P_c = P;
    sort(P_c.begin(), P_c.end());
    
    REP(i, N) {
        int pos = upper_bound(P_c.begin(), P_c.end(), P[i] + 300) - P_c.begin();
        int rank = N - pos + 1;
        if(rank <= K) {
            puts("Yes");
        } else {
            puts("No");
        }
    }

    return 0;
}
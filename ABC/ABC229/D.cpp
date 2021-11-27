#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S;
    int K;
    cin >> S >> K;

    int N = S.size();
    int cusum[N + 1] = {0};
    REP(i, N) {
        if(S[i] == '.') {
            cusum[i + 1] = cusum[i] + 1;
        } else {
            cusum[i + 1] = cusum[i];
        }
    }

    int ans = 0;
    int j = 0;
    REP(i, N) {
        while(j < N && cusum[j + 1] - cusum[i] <= K) {
            ++j;
        }
        ans = max(ans, j - i);
    }
    cout << ans << endl;

    return 0;
}
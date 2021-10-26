#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    double A[N], B[N];
    double T[N];
    REP(i, N) {
        cin >> A[i] >> B[i];
        T[i] = A[i] / B[i];
        if(i > 0) T[i] += T[i - 1];
    }

    double ans = 0;
    double half = T[N - 1] / 2;
    for(int i = 0; i <= N; ++i) {
        if(half < T[i]) {
            ans += (half - T[i - 1]) * B[i];
            break;
        }
        ans += A[i];
    }

    cout << fixed << setprecision(10);
    cout << ans << endl;

    return 0;
}
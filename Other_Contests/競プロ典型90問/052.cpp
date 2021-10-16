#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    ll ans = 1;
    REP(i, N) {
        int A;
        ll sum = 0;
        REP(j, 6) {
            cin >> A;
            sum += A;
        }
        ans = (ans * sum) % 1000000007;
    }
    cout << ans << endl;
}
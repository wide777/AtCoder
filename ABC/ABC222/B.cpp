#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, P;
    cin >> N >> P;

    int ans = 0;
    REP(i, N) {
        int a;
        cin >> a;
        if(a < P) ++ans;
    }
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;

    set<int> s;
    int d, a;
    REP(i, k) {
        cin >> d;
        REP(j, d) {
            cin >> a;
            s.insert(a);
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(!s.count(i)) ans++;
    }
    cout << ans << endl;
}
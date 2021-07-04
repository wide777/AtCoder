#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> t(N);
    vector<double> l(N), r(N);
    REP(i, N) {
        cin >> t[i] >> l[i] >> r[i];
        if(t[i] == 2) {
            r[i] -= 0.1;
        } else if(t[i] == 3) {
            l[i] += 0.1;
        } else if(t[i] == 4) {
            l[i] += 0.1, r[i] -= 0.1;
        }
    }

    int ans = 0;
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(((l[i] <= l[j] && l[j] <= r[i]) ||
                (l[i] <= r[j] && r[j] <= r[i])) ||
               ((l[j] <= l[i] && l[i] <= r[j]) ||
                (l[j] <= r[i] && r[i] <= r[j]))) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
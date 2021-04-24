#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int k;
    cin >> k;

    vector<int> v(k + 1, 0);
    for(int i = 1; i <= k; i++) {
        v[i] = (v[i - 1] * 10 + 7) % k;
        if(v[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
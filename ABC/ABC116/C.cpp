#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n + 1);
    REP(i, n) cin >> h[i];
    h[n] = 0;

    int res = 0;
    REP(i, n) {
        if(h[i] > h[i + 1]) res += h[i] - h[i + 1];
    }
    cout << res << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> esum(n + 1, 0), wsum(n + 1, 0);
    if(s[0] == 'E') {
        esum[1] = 1;
    } else if(s[0] == 'W') {
        wsum[1] = 1;
    }
    for(int i = 1; i < n; i++) {
        if(s[i] == 'E') {
            esum[i + 1] = esum[i] + 1;
            wsum[i + 1] = wsum[i];
        } else if(s[i] == 'W') {
            esum[i + 1] = esum[i];
            wsum[i + 1] = wsum[i] + 1;
        }
    }

    int res = (1 << 30);
    for(int i = 0; i <= n; i++) {
        res = min(res, wsum[i] + esum[n] - esum[i]);
    }
    cout << res << endl;
}
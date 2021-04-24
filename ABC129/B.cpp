#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    REP(i, n) cin >> w[i];

    int m = (1 << 30);
    for(int i = 1; i < n; i++) {
        int s1 = 0, s2 = 0;
        for(int j = 0; j < i; j++) s1 += w[j];
        for(int j = i; j < n; j++) s2 += w[j];
        m = min(m, abs(s1 - s2));
    }

    cout << m << endl;
}
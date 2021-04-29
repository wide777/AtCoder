#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> c1(n + 1, 0), c2(n + 1, 0);
    REP(i, n) {
        int c, p;
        cin >> c >> p;
        c1[i + 1] = c1[i] + (c == 1 ? p : 0);
        c2[i + 1] = c2[i] + (c == 2 ? p : 0);
    }

    int q;
    cin >> q;
    REP(i, q) {
        int l, r;
        cin >> l >> r;
        cout << c1[r] - c1[l - 1] << " " << c2[r] - c2[l - 1] << endl;
    }
}
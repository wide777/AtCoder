#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    cout << min({p + q, p + r, q + r}) << endl;
}
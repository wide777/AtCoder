#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    REP(i, N) cin >> x[i] >> y[i];

    set<pair<int, int>> s;
    REP(i, N) REP(j, N) {
        if(i == j) continue;
        int dx = x[i] - x[j];
        int dy = y[i] - y[j];
        int div = gcd(dx, dy);
        s.insert({dx / div, dy / div});
    }
    cout << s.size() << endl;

    return 0;
}
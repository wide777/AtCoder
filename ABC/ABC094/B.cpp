#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> cost(n + 1, 0);
    REP(i, n) {
        int a;
        cin >> a;
        cost[a]++;
    }

    int goLeft = 0, goRight = 0;
    for(int i = x - 1; 0 < i; i--) {
        if(cost[i]) goLeft++;
    }
    for(int i = x + 1; i < n; i++) {
        if(cost[i]) goRight++;
    }

    cout << min(goLeft, goRight) << endl;
}
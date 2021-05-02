#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 2), cost(n + 2);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        cost[i] = abs(a[i] - a[i - 1]);
    }
    cost[n + 1] = abs(a[n]);

    int sum = 0;
    for(int x : cost) sum += x;

    for(int i = 1; i <= n; i++) {
        int res = sum - cost[i] - cost[i + 1] + abs(a[i + 1] - a[i - 1]);
        cout << res << endl;
    }
}
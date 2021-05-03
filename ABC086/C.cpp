#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> t(n + 1), x(n + 1), y(n + 1);
    bool isYes = true;
    for(int i = 1; i <= n; i++) {
        cin >> t[i] >> x[i] >> y[i];
        int t_diff = abs(t[i] - t[i - 1]);
        int x_diff = abs(x[i] - x[i - 1]);
        int y_diff = abs(y[i] - y[i - 1]);
        if(((t_diff >= x_diff + y_diff) && (t_diff - x_diff - y_diff) % 2) ||
           (t_diff < x_diff + y_diff)) {
            isYes = false;
        }
    }
    if(isYes) {
        puts("Yes");
    } else {
        puts("No");
    }
}
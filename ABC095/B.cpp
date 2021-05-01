#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, x;
    cin >> n >> x;
    int sum = 0, mini = (1 << 30);
    REP(i, n) {
        int m;
        cin >> m;
        sum += m;
        mini = min(m, mini);
    }
    cout << n + (x - sum) / mini << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a, x = 0;
    REP(i, m) {
        cin >> a;
        x += a;
    }
    if(n >= x) {
        cout << n - x << endl;
    } else {
        cout << -1 << endl;
    }
}
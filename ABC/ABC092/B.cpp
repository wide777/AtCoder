#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, d, x;
    cin >> n >> d >> x;

    int res = x;
    REP(i, n) {
        int a;
        cin >> a;
        for(int j = 1; j <= d; j += a, res++) ;
    }
    cout << res << endl;
}
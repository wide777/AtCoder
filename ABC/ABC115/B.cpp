#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int sum = 0, M = 0;
    REP(i, n) {
        int p;
        cin >> p;
        sum += p;
        M = max(M, p);
    }
    cout << sum - M / 2 << endl;
}
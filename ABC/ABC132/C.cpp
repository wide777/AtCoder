#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    REP(i, n) cin >> d[i];
    sort(d.begin(), d.end());
    cout << d[n / 2] - d[n / 2 - 1] << endl;
}
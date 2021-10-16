#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<int> a(3);
    REP(i, 3) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    cout << 10 * a[0] + a[1] + a[2] << endl;
}
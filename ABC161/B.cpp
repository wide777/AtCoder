#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int total = 0;
    REP(i, n) {
        cin >> a[i];
        total += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    REP(i, m) {
        if(a[i] * 4 * m < total) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
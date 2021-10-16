#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    cin >> q;
    REP(i, q) {
        int b;
        cin >> b;
        int id = lower_bound(a.begin(), a.end(), b) - a.begin();
        if(id == 0) {
            cout << abs(b - a[id]) << endl;
        } else {
            cout << min(abs(b - a[id - 1]), abs(b - a[id])) << endl;
        }
    }
}
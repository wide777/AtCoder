#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    REP(i, n) cin >> a[i];
    REP(i, m) cin >> b[i];

    set<int> ans;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    REP(i, n) {
        if(all_of(b.begin(), b.end(), [&a, i](int x) { return x != a[i]; })) {
            ans.insert(a[i]);
        }
    }
    REP(i, m) {
        if(all_of(a.begin(), a.end(), [&b, i](int x) { return x != b[i]; })) {
            ans.insert(b[i]);
        }
    }
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
}
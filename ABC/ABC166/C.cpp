#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> h(n + 1, 0), a(m + 1, 0), b(m + 1, 0);
    for(int i = 1; i <= n; i++) cin >> h[i];
    for(int i = 1; i <= m; i++) cin >> a[i] >> b[i];

    set<int> s;
    for(int i = 1; i <= m; i++) {
        if(h[a[i]] == h[b[i]]) {
            s.insert(a[i]);
            s.insert(b[i]);
        } else {
            s.insert((h[a[i]] > h[b[i]]) ? b[i] : a[i]);
        }
    }

    cout << n - s.size() << endl;
}
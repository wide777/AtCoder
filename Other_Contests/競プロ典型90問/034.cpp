#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n, k, res = 0;
vector<int> a(100000);
unordered_map<int, int> m;

int main() {
    cin >> n >> k;
    REP(i, n) cin >> a[i];

    for(int l = 0, r = 0; l < n; l++) {
        while(r < n) {
            if((int)m.size() == k && !m.count(a[r])) break;
            m[a[r]]++;
            r++;
        }
        res = max(res, r - l);
        if(m[a[l]] == 1) {
            m.erase(a[l]);
        } else {
            m[a[l]]--;
        }
    }

    cout << res << endl;
}
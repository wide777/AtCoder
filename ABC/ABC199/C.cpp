#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n;
    vector<char> s(2 * n);
    REP(i, 2 * n) cin >> s[i];
    cin >> q;
    bool rev = false;
    REP(i, q) {
        int t, a, b;
        cin >> t >> a >> b;
        a--;
        b--;
        if(t == 1) {
            if(rev) {
                if(a >= n && b >= n) {
                    swap(s[a - n], s[b - n]);
                } else if(a >= n && b < n) {
                    swap(s[a - n], s[b + n]);
                } else if(a < n && b >= n) {
                    swap(s[a + n], s[b - n]);
                } else if(a < n && b < n) {
                    swap(s[a + n], s[b + n]);
                }
            } else {
                swap(s[a], s[b]);
            }
        } else if(t == 2) {
            rev = !rev;
        }
    }
    if(rev) {
        REP(i, n) cout << s[i + n];
        REP(i, n) cout << s[i];
    } else {
        REP(i, 2 * n) cout << s[i];
    }
    cout << endl;
}
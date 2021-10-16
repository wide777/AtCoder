#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int L, Q;
    cin >> L >> Q;
    set<int> s;
    s.insert(0), s.insert(L);
    REP(i, Q) {
        int c, x;
        cin >> c >> x;
        if(c == 1) {
            s.insert(x);
        } else if(c == 2) {
            auto iter = s.lower_bound(x);
            cout << *iter - *prev(iter) << endl;
        }
    }

    return 0;
}
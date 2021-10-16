#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int res = 0;
    vector<int> vi{1};
    REP(i, n) {
        if(a[i] != vi.back()) {
            res++;
        } else {
            vi.push_back(a[i] + 1);
        }
    }
    if(res != n) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}
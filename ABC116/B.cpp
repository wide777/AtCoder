#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int MAX = 1000000;

int main() {
    int s;
    cin >> s;

    auto f = [&](int id, int x) {
        if(x == 1 || x == 2 || x == 4) {
            cout << id + 4 << endl;
            return true;
        }
        return false;
    };

    vector<int> a(MAX);
    a[0] = s;
    if(f(0, s)) return 0;

    for(int i = 1; i < MAX; ++i) {
        if(a[i - 1] % 2 == 0) {
            a[i] = a[i - 1] / 2;
        } else {
            a[i] = 3 * a[i - 1] + 1;
        }
        if(f(i, a[i])) return 0;
    }
}
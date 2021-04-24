#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, l;
    cin >> n >> l;
    int taste = 0, eid, et = (1 << 30);
    for(int i = 1; i <= n; i++) {
        taste += (l + i - 1);
        if(et > abs(l + i - 1)) {
            eid = i;
            et = abs(l + i - 1);
        }
    }

    cout << taste - (l + eid - 1) << endl;
}
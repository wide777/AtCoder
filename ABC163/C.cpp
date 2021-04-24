#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, a;
    cin >> n;
    map<int, int> m;
    for(int i = 2; i <= n; i++) {
        cin >> a;
        m[a]++;
    }
    for(int i = 1; i <= n; i++) {
        if(m.count(i)) {
            cout << m.at(i) << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
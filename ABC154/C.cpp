#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, a;
    cin >> n;
    set<int> si;
    REP(i, n) {
        cin >> a;
        si.insert(a);
    }
    if(n == si.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
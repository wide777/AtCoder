#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;

    if(s == u) {
        cout << a - 1 << " " << b << endl;
    } else {
        cout << a << " " << b - 1 << endl;
    }
}
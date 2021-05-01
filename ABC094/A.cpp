#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if(a <= x && a + b >= x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
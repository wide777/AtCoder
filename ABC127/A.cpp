#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    if(a >= 13) {
        cout << b << endl;
    } else if(6 <= a && a <= 12) {
        cout << b / 2 << endl;
    } else {
        cout << 0 << endl;
    }
}
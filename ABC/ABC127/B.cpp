#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int r, d, x;
    cin >> r >> d >> x;
    for(int i = 1; i <= 10; i++) {
        cout << r * x - d << endl;
        x = r * x - d;
    }
}
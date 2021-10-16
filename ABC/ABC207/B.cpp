#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll E = (C * D) - B;
    if(E <= 0) {
        cout << -1 << endl;
    } else {
        cout << (A + (E - 1)) / E << endl;
    }
}
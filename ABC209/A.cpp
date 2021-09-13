#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    if(B - A + 1 > 0) {
        cout << B - A + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
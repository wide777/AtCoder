#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    if(a != 1 && b != 1) {
        cout << 1 << endl;
    } else if(a != 2 && b != 2) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
}
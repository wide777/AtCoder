#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b * 2) {
        cout << a - b * 2 << endl;
    } else {
        cout << 0 << endl;
    }
}
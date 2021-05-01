#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b) {
        cout << a - 1 << endl;
    } else {
        cout << a << endl;
    }
}
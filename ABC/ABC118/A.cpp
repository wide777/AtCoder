#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    if(b % a == 0) {
        cout << a + b << endl;
    } else {
        cout << b - a << endl;
    }
}
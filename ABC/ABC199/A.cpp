#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a * a + b * b < c * c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
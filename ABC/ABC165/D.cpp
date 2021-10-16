#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll a, b, n;
    cin >> a >> b >> n;
    cout << a * min(b - 1, n) / b << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int M = max(max(a, b), c);
    cout << a + b + c - M + pow(2, k) * M << endl;
}
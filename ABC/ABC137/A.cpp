#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    int M = -10000;
    M = max(M, a + b);
    M = max(M, a - b);
    M = max(M, a * b);
    cout << M << endl;
}
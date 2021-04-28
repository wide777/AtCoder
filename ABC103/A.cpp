#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int M = max(max(a, b), c);
    int m = min(min(a, b), c);
    cout << M - m << endl;
}
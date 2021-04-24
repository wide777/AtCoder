#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(0, c - (a - b)) << endl;
}
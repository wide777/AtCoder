#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    cout << (1900 * m + 100 * (n - m)) * pow(2, m) << endl;
}
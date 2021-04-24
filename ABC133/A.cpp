#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n * a, b) << endl;
}
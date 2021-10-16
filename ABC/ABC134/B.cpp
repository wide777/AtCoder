#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    if(n % (2 * d + 1) == 0) {
        cout << n / (2 * d + 1) << endl;
    } else {
        cout << n / (2 * d + 1) + 1 << endl;
    }
}
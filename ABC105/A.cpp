#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    if(n % k == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
}
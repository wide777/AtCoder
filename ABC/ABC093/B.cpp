#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    if(2 * k >= (b - a + 1)) {
        for(int i = a; i <= b; i++) {
            cout << i << endl;
        }
    } else {
        for(int i = 0; i < k; i++) {
            cout << a + i << endl;
        }
        for(int i = k - 1; 0 <= i; i--) {
            cout << b - i << endl;
        }
    }
}
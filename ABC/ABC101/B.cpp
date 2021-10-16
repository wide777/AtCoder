#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, sn = 0;
    cin >> n;
    int x = n;
    while(x > 0) {
        sn += x % 10;
        x /= 10;
    }
    if(n % sn == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
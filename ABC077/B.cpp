#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    int res = 0;
    for(ll i = 1; i <= 100000; i++) {
        if(i * i <= n) {
            res = i * i;
        } else {
            break;
        }
    }
    cout << res << endl;
}
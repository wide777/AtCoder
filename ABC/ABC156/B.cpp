#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    for(int i = 0; i <= 30; i++) {
        if(pow(k, i) > n) {
            cout << i << endl;
            return 0;
        }
    }
}
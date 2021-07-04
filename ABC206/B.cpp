#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N;
    cin >> N;
    ll saving = 0;
    for(int i = 1;; i++) {
        saving += i;
        if(N <= saving) {
            cout << i << endl;
            break;
        }
    }
}
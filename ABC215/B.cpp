#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll N;
    cin >> N;

    int i = 0;
    ll x = 1;
    for(; i <= 100; i++) {
        if(x > N) break;
        x *= 2;
    }

    cout << i - 1 << endl;
}
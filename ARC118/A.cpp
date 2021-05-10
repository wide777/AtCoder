#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll t, N;
    cin >> t >> N;

    ll res = (N / t) * 100;
    ll cnt = (N / t) * t;
    N %= t;

    for(int i = 1; i <= N; i++) {
        while(res * t < 100 * (i + cnt)) res++;
    }
    cout << res + N + cnt - 1 << endl;
}
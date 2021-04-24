#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    cout << min(abs(n - k * (n / k)), abs(n - k * (n / k + 1))) << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, tap = 1, ans = 0;
    cin >> a >> b;
    while(tap < b) {
        tap += (a - 1);
        ans++;
    }
    cout << ans << endl;
}
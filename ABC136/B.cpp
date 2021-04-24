#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(to_string(i).length() % 2 == 1) ans++;
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, p;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        cin >> p;
        if(p != i) cnt++;
    }

    if(cnt <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
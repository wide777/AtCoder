#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int h, n, a;
    cin >> h >> n;
    REP(i, n) {
        cin >> a;
        h -= a;
    }
    if(h <= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
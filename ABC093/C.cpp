#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<int> a(3);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());

    int x = a[2] - a[0], y = a[2] - a[1];
    if(x % 2 == 1 && y % 2 == 1) {
        cout << x + (y - x) / 2 << endl;
    } else if(x % 2 == 0 && y % 2 == 0) {
        cout << x / 2 + y / 2 << endl;
    } else {
        cout << min(x, y) + abs(x - y) / 2 + 2 << endl;
    }
}
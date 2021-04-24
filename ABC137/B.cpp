#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int k, x;
    cin >> k >> x;
    vector<int> a;
    for(int i = x - (k - 1); i <= x + (k - 1); i++) {
        if(-1000000 <= i && i <= 1000000) {
            a.push_back(i);
        }
    }

    REP(i, a.size()) {
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl;
}
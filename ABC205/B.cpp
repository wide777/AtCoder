#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<bool> x(n);
    REP(i, n) {
        int a;
        cin >> a;
        a--;
        x[a] = true;
    }

    bool ans = true;
    REP(i, n) {
        if(!x[i]) ans = false;
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
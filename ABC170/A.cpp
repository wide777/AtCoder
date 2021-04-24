#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x;
    REP(i, 5) {
        cin >> x;
        if(x == 0) cout << i + 1 << endl;
    }
}
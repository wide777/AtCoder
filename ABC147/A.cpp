#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, sum = 0;
    REP(i, 3) {
        cin >> a;
        sum += a;
    }
    if(sum >= 22) {
        cout << "bust" << endl;
    } else {
        cout << "win" << endl;
    }
}
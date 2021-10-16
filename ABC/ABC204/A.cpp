#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int x, y;
    cin >> x >> y;
    if(x == 0) {
        if(y == 0) {
            cout << 0 << endl;
        } else if(y == 2) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    } else if(x == 1) {
        if(y == 2) {
            cout << 0 << endl;
        } else if(y == 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    } else {
        if(y == 1) {
            cout << 0 << endl;
        } else if(y == 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int r;
    cin >> r;
    if(r < 1200) {
        cout << "ABC" << endl;
    } else if(r < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    if(0 < A && B == 0) {
        cout << "Gold" << endl;
    } else if(A == 0 && 0 < B) {
        cout << "Silver" << endl;
    } else {
        cout << "Alloy" << endl;
    }
}
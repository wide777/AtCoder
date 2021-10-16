#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    if((6 * A >= B) && A <= B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
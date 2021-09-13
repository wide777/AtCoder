#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    REP(C, 256) {
        if((A ^ C) == B) {
            cout << C << endl;
            break;
        }
    }
}
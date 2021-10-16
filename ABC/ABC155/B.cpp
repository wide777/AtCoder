#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int a;
    REP(i, n) {
        cin >> a;
        if(a % 2 == 0) {
            if(!(a % 3 == 0 || a % 5 == 0)) {
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}
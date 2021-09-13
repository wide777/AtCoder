#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string Pass;
    cin >> Pass;

    if(Pass[0] == Pass[1] && Pass[1] == Pass[2] && Pass[2] == Pass[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    bool flag = true;
    REP(i, 3) {
        if((Pass[i] - '0' + 1) % 10 != (Pass[i + 1] - '0') % 10) {
            flag = false;
        }
    }
    if(flag) {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }
    return 0;
}
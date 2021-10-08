#include <iostream>
using namespace std;

int main() {
    string S;
    int T;
    cin >> S >> T;

    int x = 0, y = 0, excl = 0;
    for(int i = 0; i < (int)S.size(); ++i) {
        if(S[i] == 'L') {
            --x;
        } else if(S[i] == 'R') {
            ++x;
        } else if(S[i] == 'U') {
            ++y;
        } else if(S[i] == 'D') {
            --y;
        } else {
            ++excl;
        }
    }

    if(T == 1) {
        cout << abs(x) + abs(y) + excl << endl;
    } else if(T == 2) {
        if(abs(x) + abs(y) >= excl) {
            cout << abs(x) + abs(y) - excl << endl;
        } else {
            excl -= abs(x) + abs(y);
            cout << excl % 2 << endl;
        }
    }

    return 0;
}
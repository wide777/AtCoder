#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if(A + B == C && A - B != C) {
        cout << '+' << endl;
    } else if(A + B != C && A - B == C) {
        cout << '-' << endl;
    } else if(A + B == C && A - B == C) {
        cout << '?' << endl;
    } else if(A + B != C && A - B != C) {
        cout << '!' << endl;
    }

    return 0;
}
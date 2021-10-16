#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    if(S == "b") {
        cout << 0 << endl;
        return 0;
    }

    string acce = "b";
    for(int i = 1; i < 100; ++i) {
        if(i % 3 == 1) {
            acce = 'a' + acce + 'c';
        } else if(i % 3 == 2) {
            acce = 'c' + acce + 'a';
        } else {
            acce = 'b' + acce + 'b';
        }

        if(acce == S) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}